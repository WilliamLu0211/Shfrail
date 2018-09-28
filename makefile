all: driver.o oof.o foo.o
	gcc driver.o oof.o foo.o

driver.o: driver.c oof.h foo.h
	gcc -c driver.c

oof.o: oof.c oof.h
	gcc -c oof.c

foo.o: foo.c foo.h
	gcc -c foo.c

clean:
	rm *.o

run:
	./a.out

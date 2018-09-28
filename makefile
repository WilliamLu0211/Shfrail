all: driver.o mylib.o
	gcc driver.o mylib.o

driver.o: driver.c mylib.h
	gcc -c driver.c

oof.o: mylib.c mylib.h
	gcc -c mylib.c

clean:
	rm *.o

run:
	./a.out

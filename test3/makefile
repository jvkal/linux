newtest1:main.o func.o
	gcc main.o func.o -o newtest1
main.o:main.c uhead.h
	gcc main.c -c
func.o:func.c 
	gcc func.c -c
clean:
	rm -f *.o

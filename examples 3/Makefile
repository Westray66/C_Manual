hello : hellow2.o add.o  
	cc -o hello hellow2.o add.o
hellow2.o : hellow.c add.h
	cc -c hellow2.c
add.o : add.c add.h 
	cc -c add.c
clean :
	rm hello hellow2.o add.o

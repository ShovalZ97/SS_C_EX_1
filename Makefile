CC = gcc -c
AR=ar rcs
ARO= gcc -shared -o
FLAGS= -Wall -g


all: maindrec mains maindloop loopd loops recursives recursived 


loops:libclassloops.a 
libclassloops.a: basicClassicfication.o advancedClassificationLoop.o 
	$(AR) libclassloops.a basicClassicfication.o advancedClassificationLoop.o

recursives:libclassrec.a
libclassrec.a: basicClassicfication.o advancedClassificationRecursion.o	
	$(AR) libclassrec.a basicClassicfication.o advancedClassificationRecursion.o	

loopd: libclassloops.so 
libclassloops.so: basicClassicfication.o advancedClassificationLoop.o 
	$(ARO)  libclassloops.so basicClassicfication.o advancedClassificationLoop.o 

recursived: libclassrec.so 
libclassrec.so :basicClassicfication.o advancedClassificationRecursion.o	
	$(ARO) libclassrec.so basicClassicfication.o advancedClassificationRecursion.o

mains: main.o libclassrec.a
	gcc -Wall main.o ./libclassrec.a -o mains -lm

maindloop: main.o libclassloops.so
	gcc -Wall main.o ./libclassloops.so -o maindloop -lm

maindrec: main.o libclassrec.so
	gcc -Wall main.o ./libclassrec.so -o maindrec -lm

.PHONY: clean all
clean:
	rm -f *.o *.a *.so mains maindloop maindrec


advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c 

basicClassicfication.o: basicClassicfication.c NumClass.h
	$(CC) $(FLAGS) -c basicClassicfication.c 

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c 


CC =gcc
CFLAG = -Wall
AR = ar



loops: libclassloops.a
recursives: libclassrec.a
recursived: libclassrec.so
loopd: libclassloops.so

mains:recursives main.c
	$(CC) $(CFLAG) -o mains main.c -L. -lclassrec

maindloop: loopd main.c
	$(CC) $(CFLAG) -o maindloop main.c -L. -lclassloops

maindrec: recursived main.c
	$(CC) $(CFLAG) -o maindrec main.c -L. -lclassrec

libclassloops.a: basicClassification.o advancedClassificationLoop.o
	$(AR) rcs $@ $^

libclassrec.a : basicClassification.o advancedClassificationRecursion.o
	$(AR) rcs &@ &^

libclassloops.so : basicClassification.o advancedClassificationLoop.o
	$(CC) $(CFLAG) -shared -fPIC -o $@ $^

libclassloops.so : basicClassification.o advancedClassificationRecursive.o
	$(CC) $(CFLAG) -shared -fPIC -o $@ $^

all: recursives recursived loopd loops mains maindrec maindloop

%.o:%.c
	$(CC) $(CFLAG) -c -o $@ $^
clean:
	rm -f *.a *.so *.o main mains maindloop maindrec

.PHONY: loops recursives recusived loopd all clean

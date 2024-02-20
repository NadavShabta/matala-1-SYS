
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

all: mains

.PHONY: loops recursives recusived loopd all clean

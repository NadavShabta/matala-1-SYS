# C Number Classification Project

## Overview
This project focuses on creating a library of functions to classify numbers based on various mathematical properties. The main interest of this project is to demonstrate the classification of functions into different types of libraries (static and dynamic) and to provide a Makefile for efficient compilation and management.

## Features
- **Prime Number Check**: Determine if a number is prime.
- **Strong Number Check**: Determine if a number is strong (sum of the factorials of its digits equals the number).
- **Armstrong Number Check**: Determine if a number is an Armstrong number (sum of the nth powers of its digits equals the number).
- **Palindrome Check**: Determine if a number is a palindrome.

## Makefile Commands
The Makefile includes the following targets:
- **Static Libraries**:
  - `make loops`: Create the static library `libclassloops.a` for all functions using loops.
  - `make recursives`: Create the static library `libclassrec.a` for all functions using recursion.
- **Dynamic Libraries**:
  - `make loopd`: Create the dynamic library `libclassloops.so` for all functions using loops.
  - `make recursived`: Create the dynamic library `libclassrec.so` for all functions using recursion.
- **Main Programs**:
  - `make mains`: Compile and link the main programs using loop-based functions.
  - `make mainrec`: Compile and link the main programs using recursion-based functions.
- **Clean Up**:
  - `make clean`: Remove all compiled files and libraries.

## Functions
### NumClass.h
Contains declarations for the following functions:
- `int isPrime(int)`: Returns 1 if the number is prime, 0 otherwise.
- `int isStrong(int)`: Returns 1 if the number is strong, 0 otherwise.
- `int isArmstrong(int)`: Returns 1 if the number is an Armstrong number, 0 otherwise.
- `int isPalindrome(int)`: Returns 1 if the number is a palindrome, 0 otherwise.

### basicClassification.c
Implements basic classification functions using loops:
- `isPrime`
- `isStrong`

### advancedClassificationLoop.c
Implements advanced classification functions using loops:
- `isArmstrong`
- `isPalindrome`

### advancedClassificationRecursion.c
Implements advanced classification functions using recursion:
- `isArmstrong`
- `isPalindrome`

## Usage
1. **Compile the libraries**:
   ```sh
   make loops
   make recursives
   make loopd
   make recursived
   ```
2. **Compile and link the main programs**:
   ```sh
   make mains
   make mainrec
   ```
   

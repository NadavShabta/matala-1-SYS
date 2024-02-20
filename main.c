//
// Created by nadav on 13/02/2024.
//
#include "NumClass.h"
#include <stdio.h>
int main() {
    int x = 0;
    int y = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if ((x <= 0) || (y <= 0)) {
        printf("only positive number allowed");
        return 0;
    }
    if (x >= y) {
        printf("The Armstrong numbers are:");
        for (int i = y; i <= x; ++i) {
            if (isArmstrong(i)) {
                printf(" %d", i);
            }
        }
        printf("\n");
        printf("The Palindromes are:");
        for (int i = y; i <= x; ++i) {
            if (isPalindrome(i)) {
                printf(" %d", i);
            }
        }
        printf("\n");
        printf("The Prime numbers are:");
        for (int i = y; i <= x; ++i) {
            if (isPrime(i)) {
                printf(" %d", i);
            }
        }
        printf("\n");
        printf("The Strong numbers are:");
        for (int i = y; i <= x; ++i) {
            if (isStrong(i)) {
                printf(" %d", i);
            }
        }


    }else{
        printf("The Armstrong numbers are:");
        for (int i = x; i <= y; ++i) {
            if (isArmstrong(i)) {
                printf(" %d", i);
            }
        }
        printf("\n");
        printf("The Palindromes are:");
        for (int i = x; i <= y; ++i) {
            if (isPalindrome(i)) {
                printf(" %d", i);
            }
        }
        printf("\n");
        printf("The Prime numbers are:");
        for (int i = x; i <= y; ++i) {
            if (isPrime(i)) {
                printf(" %d", i);
            }
        }
        printf("\n");
        printf("The Strong numbers are:");
        for (int i = x; i <= y; ++i) {
            if (isStrong(i)) {
                printf(" %d", i);
            }
        }
    }
}
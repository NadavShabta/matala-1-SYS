//
// Created by vboxuser on 2/13/24.
//

#include "NumClass.h"


int power(int x, int y){
    int base =x;
    int sum=1;
    for (int i = 0; i < y; ++i) {
        sum*=base;
    }
    return sum;
}
int isPalindromeRecursive(int num) {
    int number = 0;
    int n = 0;
    int left=0;
    int right =0;
    number = num;
    // check the numbers of digits
    if (num == 0){
        return 1;
    }
    while (number != 0) {
        number = number / 10;
        n++;
    }
    if (n == 1){
        return 1;
    }
    number = num;
    left = number/(power(10,n-1));
    right = number%10;
    if(left==right){
        number=(num% power(10,n-1))/10;
//        number=num -(left*(power(10,n-1)) + right);
        return isPalindromeRecursive(number);

    }else {
        return 0;
    }
}



int isArmstrongRecursive(int num) {
    int number = 0;
    static int sum;
    int right = 0;
    static int originalNum;
    static  int n;
    number = num;
    // check the numbers of digits
    if (originalNum == 0) {
        originalNum = num;
    }
    if (number == originalNum) {
        while (number != 0) {
            number = number / 10;
            n++;
        }
    }
    number = num;
    right = number % 10;
    sum += power(right, n);
    number = number / 10;
    static int final = 0;
    if (number == 0) {
        if (sum == originalNum) {
            final = 1;
            return 1;
        } else {
            final = 0;
            return 0;
        }
    } else {
        isArmstrongRecursive(number);
    }
    originalNum =0;
    sum =0;
    n =0;
    return final;
}



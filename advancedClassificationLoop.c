//
// Created by vboxuser on 2/13/24.
//

#include "NumClass.h"
#include <stdio.h>
#include <stdlib.h>

int power(int x, int y){
    int base =x;
    int sum=1;
    for (int i = 0; i < y; ++i) {
        sum*=base;
    }
    return sum;
}

int isArmstrong(int num){
    int  number =0;
    int sum =0;
    int n = 0;
    number = num;
    while (number !=0){
        number= number/10;
        n++;
    }
    number = num;
    char str[n+1];
    sprintf(str,"%d",num);
    for (int i = 0; i < n; ++i) {
        int temp;
        char a = str[i];
        temp = atoi(&a);


        sum += power( temp, n);
    }

    if (sum == num) {return 1;
    }
    else{ return 0;
    }
}



int isPalindrome(int num){
    int number =0;
    int n =0;
    number = num;
    // check the numbers of digits
    while (number !=0){
        number= number/10;
        n++;
    }

    char str [n];
    sprintf(str,"%d",num);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        char a = str[i];
        arr[i] =atoi(&a);
    }
    //if the number of digits is even
    if (n%2 == 0){
        int i =0;
        while (i<n/2) {
            for (int j = n-1; j >=n/2 ; --j) {
                if(arr[i] != arr[j]) return 0;
                ++i;
            }
        }
        return 1;
    }
    //if the number of digits is odd
    if(n%2 !=0){
        int i =0;
        while (i<(n-1)/2) {
            for (int j = n - 1; j > (n - 1) / 2; --j) {
                if (arr[i] != arr[j]) return 0;
                ++i;
            }
        }
        return 1;
    }
    return 0;
}

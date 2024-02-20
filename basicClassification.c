
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



int isPrime(int num){
    if(num == 0 || num == 1) {
        return 0;
    }
    for (int i = 2; i<num ; ++i) {
        if(num %i == 0 ) return 0;

    }
    return 1;
}

int isStrong (int num){
    int number =0;
    int n =0;
    int tempSum =1;
    int sum =0;
    int temp =0;
    number = num;
    while (number !=0){
        number= number/10;
        n++;
    }
    char str [n];
    sprintf(str , "%d", num);
    for (int i = 0; i < n; ++i) {
        tempSum = 1;
        char a = str[i];
        temp = atoi(&a);
        for (int j = temp; j > 0; --j) {
            tempSum *= j;
        }
        sum += tempSum;
    }
    if(sum == num){return 1;
    }else{
        return 0;
    }
}

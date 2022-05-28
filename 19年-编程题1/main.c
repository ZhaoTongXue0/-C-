//
//  main.c
//  19年-编程题1
//
//  Created by 赵同学 on 2022/3/24.
//
//  1.计算输出 Fibonacci 数列前 20 项，并按每行 4 个数的格式输出。 该数列有如下特点:
//  (1)第1个数为1，第2个数为1;
//  (2)从第 3 个数起，该数等于前两个数之和。即:
//  F1=1 (n=1) F2=1 (n=2) Fn=Fn-1+Fn-2 (n>=3)

#include <stdio.h>

int main(){
    int Fib[20],i;
    Fib[0]=1;
    Fib[1]=1;
    for (i=2; i<20; i++) {
        Fib[i]=Fib[i-1]+Fib[i-2];
    }
    for (i=1; i<21; i++) {
        printf("%d     ",Fib[i-1]);
        if (i%4==0) {
            printf("\n");
        }
    }
}

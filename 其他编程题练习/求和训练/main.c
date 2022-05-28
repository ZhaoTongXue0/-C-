//
//  main.c
//  求和训练
//
//  Created by 赵同学 on 2022/4/29.
//  求以下三数的和,保留2位小数 1~a之和 1~b的平方和 1~c的倒数和
//  1+2+...+a + 1^2+2^2+...+b^2 + 1/1+1/2+...+1/c


#include <stdio.h>

int main(){
    float sum=0.0;
    int a,b,c,i;
    scanf("%d %d %d",&a,&b,&c);
    for (i=1; i<=a; i++) {
        sum+=i;
    }
    for (i=1; i<=b; i++) {
        sum+=i*i;
    }
    for (i=1; i<=c; i++) {
        sum+=1.0/i;
    }
    printf("%.2f",sum);
}
//100 50 10
//47977.93

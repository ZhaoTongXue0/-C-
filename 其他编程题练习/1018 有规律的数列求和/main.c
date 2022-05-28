//
//  main.c
//  1018 有规律的数列求和
//
//  Created by 赵同学 on 2022/5/7.
//
//  2/1 3/2 5/3 8/5 13/8 21/13...... 求出这个数列的前N项之和，保留两位小数。
#include <stdio.h>

int main(){
    int i,n,t;
    scanf("%d",&n);
    double a=2,b=1,sum=0;
    for (i=1; i<=n; i++) {
        sum+=a/b;
        t=a;
        a=a+b;
        b=t;
    }
    printf("%0.2lf",sum);
}

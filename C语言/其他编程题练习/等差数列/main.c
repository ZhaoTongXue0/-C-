//
//  main.c
//  等差数列
//
//  Created by 赵同学 on 2022/5/22.
//
// sum=2+5+8+11+14+…，输入正整数n，求sum的前n项和。

#include <stdio.h>

int main(){
    int sum=0,n,i,k=2;
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        sum+=k;
        k+=3;
    }
    printf("%d",sum);
}

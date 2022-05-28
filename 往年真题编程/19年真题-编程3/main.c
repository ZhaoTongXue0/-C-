//
//  main.c
//  19年真题-编程3
//
//  Created by 赵同学 on 2022/3/24.
//
//  (1)设计一个函数 int isprime(int x)用于判断一个整数是否为素数，是素数返回 1，否则 返回 0。(素数是只能被 1 和它自身整除的整数)
//  (2)在主函数中调用 isprime 函数，输出 100~999 之间的个位数字为 7 的所有素数之和。
#include <stdio.h>

int isprime(int x){
    if (x%1==0&&x%x==0) {
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int sum=0,i;
    for (i=100; i<1000; i++) {
        if (isprime(i)) {
            if (i%10==7) {
                sum+=i;
                printf("%d \n",i);
            }
        }
    }
    printf("合为：%d",sum);
}

//
//  main.c
//  3套卷卷一编程
//
//  Created by 赵同学 on 2022/6/2.
//

#include <stdio.h>

//m个人的成绩存放在score数组中，请编写函数fun，
//他的功能是：将低于平均分的人作为函数值返回，将低于平均分的分数放在below所指定的函数中。
float fun1(float score[],int m){
    int i,n=0;
    float aver=0.0,sum=0.0;
    for (i=0; i<m; i++) {
        sum+=score[i];
    }
    aver=sum/m;
    for (i=0; i<m; i++) {
        if (aver>score[i]) {
            below(score[i]);
            n++;
        }
    }
    return n;
}


//请编写一个void fun(int m,int k, int xx[])，
//该函数的功能是：将大于整数m且紧靠m的k个素数存入xx所指的数组中
void fun3(int m,int k,int xx[]){
    
}









//请编写函数void fun(int x,intpp[],int *n),
//它的功能是：求出能整除x且不是偶数的各整数，并按从小到大的顺序放在pp所指的数组中，这些除数的个数通过形参n返回
void fun(int x,int pp[],int *n){
    int i;
}

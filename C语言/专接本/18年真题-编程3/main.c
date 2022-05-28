//
//  main.c
//  18年真题-编程3
//
//  Created by 赵同学 on 2022/3/15.
//

#include <stdio.h>

int input(int a[],int n){
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    return 0;
}

int ssum(int a[],int n){
    int he=0;
    for (int i=0; i<n; i++) {
        he+=a[i];
    }
    return he;
}

int smax(int a[],int n){
    int gao=a[0];
    for (int i=1; i<n; i++) {
        if(a[i]>gao) {
            gao=a[i];
        }
    }
    return gao;
}

int smin(int a[],int n){
    int di=a[0];
    for (int i=1; i<n; i++) {
        if (a[i]<di) {
            di=a[i];
        }
    }
    return di;
}

int main(){
    int score[10],max,min,sum;
    float aver;
    input(score,10);    //输入10个评委的评分
    sum=ssum(score,10); //计算10个评委的评分之和
    max=smax(score,10); //计算最高分
    min=smin(score,10); //计算最低分
    aver=(sum-max-min)*1.0/(10-2);  //计算学生的最终得分
    printf("%f\n",aver);    //输出学生的最终分
}

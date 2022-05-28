//
//  main.c
//  平均值计算
//
//  Created by 赵同学 on 2022/5/22.
//
// 输入10个整数，求它们的平均值，并输出大于平均值的数据的个数。

#include <stdio.h>

int main(){
    int a[10],i,aver=0,sum=0,n=0;
    for (i=0; i<10; i++) {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    aver=sum/10;
    for (i=0; i<10; i++) {
        if (a[i]>aver) {
            n++;
        }
    }
    printf("%d",n);
}

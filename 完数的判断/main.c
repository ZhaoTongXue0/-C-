//
//  main.c
//  完数的判断
//
//  Created by 赵同学 on 2022/4/29.
//

#include<stdio.h>
int main() {
    int n,i,j,a[100],l;
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        int tem=0,k=0; //每次开始新一轮的内循环之前重置
        for(j=1; j<i; j++) {
            if(i%j==0) {//满足条件
                tem+=j;//储存因子之和
                a[k++]=j;//储存因子
            }
        }
        if(tem==i) {//满足条件 格式输出
            printf("%d its factors are",i);
            for(l=0;l<k;l++){
                printf(" %d",a[l]);
            }
            printf("\n");
        }
    }
    return 0;
}

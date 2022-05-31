//
//  main.c
//  矩阵转置
//
//  Created by 赵同学 on 2022/5/31.
//
// 行和列置换

#include <stdio.h>
void t(int (*m)[3]){
    int i,j,k;
    for (i=0; i<3; i++) {
        for (j=0; j<i; j++) {
            k=m[i][j];
            m[i][j]=m[j][i];
            m[j][i]=k;
        }
    }
}
int main(){
    int i,j,m[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("转置前：\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%5d",m[i][j]);
        }
        printf("\n");
    }
    t(&m);
    printf("转置后:\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%5d",m[i][j]);
        }
        printf("\n");
    }
}

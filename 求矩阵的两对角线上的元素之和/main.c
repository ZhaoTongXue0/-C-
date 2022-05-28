//
//  main.c
//  求矩阵的两对角线上的元素之和
//
//  Created by 赵同学 on 2022/5/22.
//
// 矩阵的行数N
// 和一个N*N的整数矩阵a[N][N](N<=10)
// 输出矩阵的两对角线上的元素之和

#include <stdio.h>

int main(){
    int N,i,j,sum=0;
    int a[10][10];
    scanf("%d",&N);
    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
            scanf("%d",&a[i][j]);
            if (i==j || i+j==N-1) {
                sum+=a[i][j];
            }
        }
    }
    printf("%d",sum);
}

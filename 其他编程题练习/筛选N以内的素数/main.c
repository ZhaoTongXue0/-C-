//
//  main.c
//  筛选N以内的素数
//
//  Created by 赵同学 on 2022/5/22.
//

#include <stdio.h>

int main(){
    int i,N,j;
    scanf("%d",&N);
    for (i=2; i<N; i++) {
        for (j=2; j<i; j++) {
            if (i%j==0) { //能被其他数整除
                break;
            }
        }
        if (i==j) {
            printf("%d\n",i);
        }
    }
}

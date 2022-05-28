//
//  main.c
//  99乘法表
//
//  Created by 赵同学 on 2022/3/2.
//

#include <stdio.h>
int main(){
    int f[20],i;
    f[0]=1;
    f[1]=1;
    for (i=2; i<20; i++) {
        f[i]=f[i-1]+f[i-2];
    }
    for (i=0; i<20; i++) {
        printf("%d ",f[i]);
        if ((i+1)%4==0) {
            printf("\n");
        }
    }
}

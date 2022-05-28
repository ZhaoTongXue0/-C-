//
//  main.c
//  卷4编程1
//
//  Created by 赵同学 on 2022/4/19.
//

#include <stdio.h>

void fun(int m,int xx[],int *k){
    int i,j,n=0;
    for (i=2; i<m; i++) {
        for (j=2;j<i;j++ ) {
            if (i%j==0) {
                xx[n]=i;
                n++;
                break;
            }
        }
    }
    *k=n;
}
int main(){
    int a[100];
    int t = 0;
    fun(100,a,&t);
    printf("%d",t);
}

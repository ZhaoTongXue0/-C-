//
//  main.c
//  数组插入
//
//  Created by 赵同学 on 2022/5/22.
//

#include <stdio.h>

int main(){
    int a[10],i,j;
    for (i=0; i<9; i++) {
        scanf("%d",&a[i]);
    }
    scanf("%d",&a[9]);
    for (i=0; i<10 ; i++) {
        for (j=i+1; j<10; j++) {
            if (a[j]<a[i]) {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
    for (i=0; i<10; i++) {
        printf("%d\n",a[i]);
    }
}

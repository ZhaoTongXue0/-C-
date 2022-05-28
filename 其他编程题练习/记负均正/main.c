//
//  main.c
//  记负均正
//
//  Created by 赵同学 on 2022/4/29.
//

#include <stdio.h>

int main(){
    float aver=0.0;
    int i,n=0,k=0;
    int a[20];
    for (i=0; i<20; i++) {
        scanf("%d",&a[i]);
    }
    for (i=0; i<20; i++) {
        if (a[i]<0) {
            n++;
        }
        if (a[i]>=0) {
            aver+=a[i];
            k++;
        }
    }
    aver/=k;
    printf("%d\n",n);
    printf("%.2f\n",aver);
}

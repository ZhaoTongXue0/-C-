//
//  main.c
//  1013 Sn的共识求和
//
//  Created by 赵同学 on 2022/5/7.
//

#include <stdio.h>

int main(){
    int Sn=0,n,a=0;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        a=a*10+2;
        Sn+=a;
    }
    printf("%d",Sn);
}

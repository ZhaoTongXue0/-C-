//
//  main.c
//  卷5编程3
//
//  Created by 赵同学 on 2022/4/19.
//

#include <stdio.h>
double fun(int n){
    int i;
    float sn=0.0;
    for (i=1; i<n; i++) {
        sn+=(1.0/(2*i-1)-1.0/(2*i));
    }
    return sn;
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%f",fun(a));
}

//
//  main.c
//  18年真题-编程1
//
//  Created by 赵同学 on 2022/3/16.
//

#include <stdio.h>
#include <math.h>
#define S (a+b+c)/2

int main(){
    float a,b,c,s;
    scanf("%f %f %f",&a,&b,&c);
    if ( a+b>c && b+c>a && a+c>b ) {
        s=sqrt(S*(S-a)*(S-b)*(S-c));
        printf("%.2f",s);
    }else{
        printf("False");
    }
}


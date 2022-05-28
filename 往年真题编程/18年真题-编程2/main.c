//
//  main.c
//  18年真题-编程2
//
//  Created by 赵同学 on 2022/3/16.
//

#include <stdio.h>
#include <math.h>

int main(){
    float pi,sum=0.0,s;
    int i=1;
    do{
        s=1.0/(i*i);
        sum+=s;
        i++;
    }while(s>1e-5);
    pi=sqrtf(sum*6);
    printf("%f\n",pi);
}

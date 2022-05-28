//
//  main.c
//  分段函数求值
//
//  Created by 赵同学 on 2022/4/15.
//

#include <stdio.h>

int main(){
    int x,y;
    scanf("%d",&x);
    if (x<1) {
        y=x;
    }else if (x>=1&&x<10){
        y=2*x-1;
    }else{
        y=3*x-11;
    }
    printf("%d",y);

}

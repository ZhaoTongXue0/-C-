//
//  main.c
//  带参数宏定义练习
//
//  Created by 赵同学 on 2022/5/22.
//

#include <stdio.h>
#define huan(a,b) a=a+b;b=a-b;a=a-b;

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    huan(a,b);
    printf("%d %d",a,b);
}

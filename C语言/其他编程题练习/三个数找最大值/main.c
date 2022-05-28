//
//  main.c
//  三个数找最大值
//
//  Created by 赵同学 on 2022/4/15.
//

#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if (a>b) {
        if (a>c) {
            printf("%d",a);
        }else{
            printf("%d",c);
        }
    }else if (b>c){
        printf("%d",b);
    }else{
        printf("%d",c);
    }
}

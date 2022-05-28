//
//  main.c
//  字符串正反连接
//
//  Created by 赵同学 on 2022/5/24.
//

#include <stdio.h>

int main(){
    char ss[51],*p1,*p2;
    gets(ss);
    p1=ss;
    p2=ss;
    while (*p1) {
        p1++;
        p2++;
    }
    p2--;
    while (*p2) {
        *p1=*p2;
        p1++;
        p2--;
    }
    *p2='\0';
    puts(ss);
}

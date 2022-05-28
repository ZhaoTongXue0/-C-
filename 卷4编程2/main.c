//
//  main.c
//  卷4编程2
//
//  Created by 赵同学 on 2022/4/19.
//

#include <stdio.h>
void fun(char *p1,char *p2){
    while (*p1) {
        p1++;
    }
    while (*p2) {
        *p1=*p2;
        p1++;
        p2++;
    }
    *p1='\0';
}
int main() {
    char a[10]="abc",b[5]="def";
    fun(a, b);
    puts(a);
}

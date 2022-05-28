//
//  main.c
//  卷5编程2
//
//  Created by 赵同学 on 2022/4/19.
//

#include <stdio.h>
#include "string.h"
void fun(char *ss,char t[]){
    int i,n=0;
    for (i=0; i<strlen(ss); i++) {
        if (i%2!=0) {
            t[n]=ss[i];
            n++;
//            *(t++)=ss[i];
//            *t++=ss[i];
        }
    }
    t[n]='\0';
}
int main(){
    char ss[20]="01234567891234567891";
    char a[20];
    fun(ss, a);
    puts(a);
}

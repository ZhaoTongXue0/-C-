//
//  main.c
//  卷3编程1
//
//  Created by 赵同学 on 2022/4/18.
//

#include <stdio.h>
#include "string.h"

int fun(char *ss,char a){
    int i,num=0;
    for (i=0; i<strlen(ss); i++) {
        if (ss[i]==a) {
            num++;
        }
    }
    return num;
}
int main(){
    char ss[15]="nnnnnnnnnnnnnn";
    char a='n';
    printf("%d",fun(ss, a));
}

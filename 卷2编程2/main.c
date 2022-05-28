//
//  main.c
//  卷2编程2
//
//  Created by 赵同学 on 2022/4/17.
//

#include <stdio.h>
char fun(char *s){
    int i,j;
    char t;
    for (i=1; i<6; i++) {
        for (j=1; j<6; j++) {
            if (s[j]<s[i]) {
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
    return 0;
}

int main(){
    char a[8]="123456";
    char b;
    b=fun(a);
    puts(a);
}

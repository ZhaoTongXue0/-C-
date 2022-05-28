//
//  main.c
//  大小写问题
//
//  Created by 赵同学 on 2022/5/22.
// 输入一串字符,将其中的大写变成小写，若不为大写则原样输出

 

#include <stdio.h>

int main(){
    char s[100];
    int i;
    gets(s);
    for (i=0; s[i]!='\0'; i++) {
        if (s[i]>='A'&&s[i]<='Z') {
            s[i]+=32;
        }
    }
    puts(s);
}

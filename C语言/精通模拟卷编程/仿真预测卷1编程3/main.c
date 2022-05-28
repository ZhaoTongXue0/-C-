//
//  main.c
//  仿真预测卷1编程3
//
//  Created by 赵同学 on 2022/5/16.
//

#include <stdio.h>
int main(){
    char s1[80],s2[10];
    int i,j;
    printf("输入s1字符串");
    gets(s1);
    printf("输入s2字符串");
    gets(s2);
    for (i=0; s2[i]!='\0'; i++) {
        for (j=0; s1[j]!='\0'; j++) {
            if (s2[i]==s1[j]) {
                s1[j]='\b';
            }
        }
    }
    puts(s1);
}
//adeaabfce
//efd

//
//  main.c
//  数字的判断与处理
//
//  Created by 赵同学 on 2022/4/16.
//  给出一个不多于5位的整数，要求 1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字，例如原数为321,应输出123

#include <stdio.h>
#include <string.h>
int main(){
    char a[10];
    int i,len;
    scanf("%s",a);
    len = strlen(a);
    printf("%d\n",len);
    for (i=0; i<len; i++) {
        printf("%c",a[i]);
        if (i!=len-1) {
            printf(" ");
        }
    }
    printf("\n");
    for (i=len-1; i>=0; i--) {
        printf("%c",a[i]);
    }
    printf("\n");
}

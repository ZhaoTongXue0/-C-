//
//  main.c
//  卷2.1
//
//  Created by 赵同学 on 2022/6/14.
//
//  输入一个英文字母(a和z除外),找出它的前驱和后继字母，并将这三个字母按从小到大的顺序输出，要求使用子函数实现
#include <stdio.h>
void paixu(char a){
    printf("%c",a-1);
    printf("%c",a);
    printf("%c",a+1);
}
int main(){
    char a;
    scanf("%c",&a);
    paixu(a);
}

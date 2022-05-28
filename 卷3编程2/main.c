//
//  main.c
//  卷3编程2
//
//  Created by 赵同学 on 2022/4/18.
//  请编写函数 fun，该函数的功能是：将m行n列的二维数组中的字符数据，按列的顺序依次放到一个字符串中。

#include <stdio.h>
void fun(char *s,int m,int n,char t[]){
    int i,j,r=0;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            t[r]=s[j*n+i];
            r++;
        }
    }
    t[r]='\0';
}
int main(){
    char s[5][5] = {"11111","22222","33333","44444","55555"};
    char t[100];
    fun(s[0], 5, 5, t);
    puts(t);
}


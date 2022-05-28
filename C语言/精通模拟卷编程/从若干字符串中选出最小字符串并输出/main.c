//
//  main.c
//  从若干字符串中选出最小字符串并输出
//
//  Created by 赵同学 on 2022/5/7.
//

#include<stdio.h>
#include<string.h>

char *strmin(char *name[5],int n){
    char *temp;
    int i;
    temp=name[0];   //接受第1个字符串，用来当作最小值
    for (i=1; i<n; i++) {
        if (strcmp(temp, name[i])>0) {  //字符串比较要用strcmp指令 >结果是1;=结果是0;<结果是-1
            temp=name[i];   //如果temp > name[i]的值，赋值 当做小值
        }
    }
    return temp; //返回temp 最小值
}
int main(){
    char *name[]={"Tom","Mary","Adam","Lance","Frank"};
    printf("%s\n",strmin(name, 5));
}

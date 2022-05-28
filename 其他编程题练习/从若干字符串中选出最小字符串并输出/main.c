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
    temp=name[0];
    for (i=1; i<n; i++) {
        if (strcmp(temp, name[i])>0) {
            temp=name[i];
        }
    }
    return temp;
}
int main(){
    char *name[]={"Tom","Mary","Adam","Lance","Frank"};
    printf("%s\n",strmin(name, 5));
}

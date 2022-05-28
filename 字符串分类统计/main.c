//
//  main.c
//  字符串分类统计
//
//  Created by 赵同学 on 2022/5/7.
//

#include <stdio.h>
int main(){
    char s[200];
    int a=0,b=0,c=0,d=0;
    gets(s);
    for (int i=0; s[i]!='\0'; i++) {
        if ((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')) {
            a++;
        }else if (s[i]>='0'&&s[i]<='9'){
            b++;
        }else if(s[i]==' '){
            c++;
        }else{
            d++;
        }
    }
    printf("%d %d %d %d",a,b,c,d);
}

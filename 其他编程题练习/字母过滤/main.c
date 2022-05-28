//
//  main.c
//  字母过滤
//
//  Created by 赵同学 on 2022/5/10.
//

#include <stdio.h>
int fun(char *s){
    int x=0;
    char *p=s;
    while (1) {
        if (*p=='\0') {
            break;
        }
        if (*p<'a'||*p>'z') {
            if (*p<'A'||*p>'Z') {
                *s=*p;
                x++;
                s++;
            }
            ++p;
        }
    }
    *s='\0';
    return x;
}
//int fun(char *str){
//    int i,m=0;
//    for (i=0; str[i]!='\0'; i++) {
//        if ((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')) {
//            str[i]='\b';
//        }
//    }
//    for (i=0; str[i]!='\0'; i++) {
//        if (str[i]=='\b') {
//            continue;;
//        }
//        m++;
//    }
//    return m;
//}
//int fun(char *s){
//    int i,n=0,j=0;
//    char ss[100];
//    for (i=0; s[i]!='\0'; i++) {    //将字母字符全部替换成\t
//        if ((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')) {
//            s[i]='\t';
//        }
//    }
//    for (i=0; s[i]!='\0'; i++) {    //统计数字字符的数量
//        if (s[i]>='0'&&s[i]<='9') {
//            n++;
//        }
//    }
//    for (i=0; s[i]!='\0'; i++) {    //把s数组中的数字字符 除了\t 赋值给ss数组
//        if (s[i]=='\t') {
//            continue;
//        }
//        ss[j]=s[i];
//        j++;
//    }
//    strcpy(s,ss);   //直接覆盖
//    return n;
//}
int main(){
    char str[100];
    int s;
    gets(str);
    s=fun(str);
    puts(str);
    printf("%d",s);
}


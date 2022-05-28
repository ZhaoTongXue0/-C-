//
//  main.c
//  卷3编程3
//
//  Created by 赵同学 on 2022/4/18.
//

#include <stdio.h>
#include <string.h>
void fun(char *ss){
    int i;
    for (i=0; i<strlen(ss); i++) {
        if (i%2!=0) {
            if (ss[i]>='a'&&ss[i]<'z') {
                ss[i]-=32;
            }
        }
    }
}

int main(){
    char s[10]="aaaabbbbb";
    fun(s);
    printf("%s\n",s);
}

//
//  main.c
//  卷2编程3
//
//  Created by 赵同学 on 2022/4/17.
//

#include <stdio.h>
#include <string.h>

char fun(char *s){
    int n,i,j;
    n=strlen(s);
    for(i=0,j=n-1;i<j;i++,j--){
        if(s[i]!=s[j]){
            break;
        }
    }
    if(i>=j){
        return 1;
        
    }else{
        return 0;
        
    }
}

int main(){
    char s[11];
    gets(s);
    if (fun(s)) {
        printf("Y\n");
    }else{
        printf("N\n");
    }
}

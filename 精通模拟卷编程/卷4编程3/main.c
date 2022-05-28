//
//  main.c
//  卷4编程3
//
//  Created by 赵同学 on 2022/4/19.
//

#include <stdio.h>
void fun(char s1[][10],int m,int n,char *s2){
    int i,j,k=0;
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            s2[k]=s1[i][j];
            k++;
        }
    }
}
int main() {
    char aa[5][10]={"11111","22222","33333","44444","55555"};
    char bb[20];
    fun(aa,4,2,bb);
    puts(bb);
    printf("\n");
}

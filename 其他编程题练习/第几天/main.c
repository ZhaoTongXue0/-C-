//
//  main.c
//  第几天
//
//  Created by 赵同学 on 2022/5/22.
//

#include <stdio.h>

int main(){
    int year,month,day;
    while (scanf("%d/%d/%d",&year,&month,&day)!=EOF) {
        int i,n;
        int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        n=0;
        for (i=0; i<month-1; i++) {
            n+=d[i];
        }
        n+=day;
        if ((year%4==0&&year%100!=0)||year%400==0) {
            n++;
        }
        printf("%d\n",n);
    }
    return 0;
}


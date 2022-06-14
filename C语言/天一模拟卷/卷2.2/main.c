//
//  main.c
//  卷2.2
//
//  Created by 赵同学 on 2022/6/14.
//  输入某年某月某日，判断这一天是这一年的第几天

#include <stdio.h>

int main(){
    int year,month,day;
    int sum=0;
    int yue[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d",&year,&month,&day);
    for (int i=0; i<month; i++) {
        if(month==1){
            sum=0;
        }else{
            sum+=yue[i-1];    //加上每月的天数
        }
    }
    sum+=day;   //加上天数
    if((year%4==0&&year%4==0)||year%400==0){
        sum+=1; //是闰年加1天
    }
    printf("%d年%d月%d日是这一年的第%d天",year,month,day,sum);
}

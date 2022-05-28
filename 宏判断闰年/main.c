//
//  main.c
//  宏判断闰年
//
//  Created by 赵同学 on 2022/5/22.
//

#include <stdio.h>
#define LEAP_YEAR(y) ((y%4==0 && y%100!=0) || y%400==0)?printf("L"):printf("N")
int main(){
    int year;
    scanf("%d",&year);
    LEAP_YEAR(year);
}

//#define LEAP_YEAR(y) ((y%4==0 && y%100!=0) || y%400==0)
//int main(){
//    int year;
//    scanf("%d",&year);
//    if (LEAP_YEAR(year)) {
//        printf("L\n");
//    }else{
//        printf("N\n");
//    }
//}

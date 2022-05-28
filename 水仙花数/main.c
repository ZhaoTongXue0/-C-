//
//  main.c
//  水仙花数
//
//  Created by 赵同学 on 2022/5/7.
//
// i/100 消2位 取百位，(i%100)/10 取后2位在消末位 取十位，i%10取个位

#include <stdio.h>
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==(n/100)*(n/100)*(n/100)+((n/10)%10)*((n/10)%10)*((n/10)%10)+(n%10)*(n%10)*(n%10)){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}
//#include <math.h>
//int main(){
//    int i;
//    for (i=100; i<1000; i++) {
//        if (i==(pow(i/100,3)+pow((i%100)/10,3)+pow(i%10,3))){
//            printf("%d\n",i);
//        }
//        if (i==(i/100)*(i/100)*(i/100)+((i%100)/10)*((i%100)/10)*((i%100)/10)+(i%10)*(i%10)*(i%10) ){
//            printf("%d\n",i);
//        }
//    }
//}

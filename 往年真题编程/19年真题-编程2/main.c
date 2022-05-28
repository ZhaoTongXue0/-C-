//
//  main.c
//  19年真题-编程2
//
//  Created by 赵同学 on 2022/3/24.
//
//  2.学校在 1000 名师生中发起慈善捐款，自愿募捐、款数不限，总数超过 20000(2 万)元 活动结束。编写程序，统计参与捐款的师生人数及捐款总数(精确到角币，即保留 1 位小 数)。
#include <stdio.h>

int main(){
    float sum=0,jin=0;
    int i;
    for (i=1; i<=1000; i++) {
        printf("第%d个人的捐款金额",i);
        scanf("%f",&jin);
        sum+=jin;
        if (sum>20000) {
            break;
        }
    }
    printf("捐款总额:%.1f",sum);
    printf("捐款人数:%d",i);
}

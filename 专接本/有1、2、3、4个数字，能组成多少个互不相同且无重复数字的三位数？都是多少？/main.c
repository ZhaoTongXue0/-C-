//
//  main.c
//  有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
//
//  Created by 赵同学 on 2022/3/12.
//
//  可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去 掉不满足条件的排列

#include <stdio.h>

int main(){
    int i,j,k,sum=0;
    for (i=1; i<5; i++) {
        for (j=1; j<5; j++) {
            for (k=1; k<5; k++) {
                if (i!=k&&i!=j&&j!=k) {
                    printf("%d %d %d\n",i,j,k);
                    sum++;
                }
            }
        }
    }
    printf("一共能组成%d个互不相同且无重复数字的三位数",sum);
}

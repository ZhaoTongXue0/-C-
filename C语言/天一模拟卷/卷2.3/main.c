//
//  main.c
//  卷2.3
//
//  Created by 赵同学 on 2022/6/14.
//  找出1000以内的所有完数
//  若一个数的各因子(不含该数本身)之和等于该数，则称其为完数
//  例如6的因子是1,2,3 而6=1+2+3，所以6是完数

#include <stdio.h>

int main(){
    int i,j,sum;
    for (i=1; i<1000; i++) {
        sum=0;
        for (j=1; j<i; j++) {
            if(i%j==0){
                sum+=j;
            }
        }
        if(sum==i){
            printf("%d\n",i);
        }
    }
}

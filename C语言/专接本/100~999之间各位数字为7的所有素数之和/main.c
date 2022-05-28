//
//  main.c
//  100~999之间个位数字为7的所有素数之和
//
//  Created by 赵同学 on 2022/3/12.
//

#include<stdio.h>
int isprime(int x){
    if (x%1==0&&x%x==0)
    {
        return 1;
    } else{
        return 0;
    }
}
int main(){
    int i,sum=0;
    for(i=100;i<1000;i++){
        if (isprime(i))
        {
            if(i%10==7){
                printf("%d\n",i);
                sum+=i;
            }
        }
        
    }
    printf("合为:%d",sum);
    
}

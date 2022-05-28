//
//  main.c
//  仿真预测卷1编程2
//
//  Created by 赵同学 on 2022/5/16.
//

#include <stdio.h>
int main(){
    int i,n,p=1,sum=0;
    scanf("%d",&n);
    for (i=1; sum<n; i++) {
        p+=i;
        sum+=p;
    }
    printf("m最大为:%d",i-1);
}

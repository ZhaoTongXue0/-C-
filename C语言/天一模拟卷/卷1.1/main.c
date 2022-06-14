//
//  main.c
//  卷1.1
//
//  Created by 赵同学 on 2022/6/13.
//

#include <stdio.h>

int main(){
    int i,xuehao[5],n=0;
    char name[5],xingbie[5];
    float chengji[5],ega[5];
    float aver1=0.0,aver2=0.0;
    for (i=0; i<5; i++) {
        printf("请输入学号：");
        scanf("%d",&xuehao[i]);
        printf("请输入姓名：");
        scanf("%s",&name[i]);
        printf("请输入年龄：");
        scanf("%f",&ega[i]);
        printf("请输入性别：");
        scanf("%s",&xingbie[i]);
        printf("请输入成绩：");
        scanf("%f",&chengji[i]);
    }
    for (i=0; i<5; i++) {
        aver1+=chengji[i];
        aver2+=ega[i];
    }
    aver1/=5;
    aver2/=5;
    for (i=0; i<5; i++) {
        if (aver1>chengji[i]) {
            n++;
        }
    }
    printf("平均年龄%f\n",aver2);
    printf("平均分%f\n",aver1);
    printf("低于平均分人数:%d\n",n);
    for (i=0; i<5; i++) {
        printf("%d\n",xuehao[i]);
        printf("%s\n",name[i]);
        printf("%f\n",chengji[i]);
        printf("%f\n",ega[i]);
        printf("%s\n",xingbie[i]);
    }
}

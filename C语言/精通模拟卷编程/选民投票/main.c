//
//  main.c
//  选民投票
//
//  Created by 赵同学 on 2022/5/31.
//

#include <stdio.h>
#include <string.h>

struct Person{
    char name[20];  //Candidate name
    int count;      //Candidate votes
} leader[3]={{"Li",0},{"Zhao",0},{"Sun",0}};

int main(){
    int i,j;
    char leader_name[20];
    for (i=0; i<20; i++) {
        scanf("%s",leader_name);    //Enter candidata name
        for (j=0; j<3; j++) {
            if (strcmp(leader_name, leader[j].name)==0) {   //Judging candidate names
                leader[j].count++;
            }
        }
    }
    printf("\nResult:\n");
    for (i=0; i<3; i++) {
        printf("%5s:%d\n",leader[i].name,leader[i].count);
    }
}

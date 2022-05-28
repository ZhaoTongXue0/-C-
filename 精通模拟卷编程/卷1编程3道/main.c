//
//  main.c
//  卷1编程3道
//
//  Created by 赵同学 on 2022/5/28.
//

#include <stdio.h>

// 三道题目都是编写fun函数，为了编辑器不报错 用fun1，fun2，fun3区分

// 题目 请编写一个fun函数，它的功能是：找出一维整型数组元素中最大的值和它所在的下标，最大的值和它所在的下标通过形参传回。数组元素中的值已在主函数中赋予。主函数中x是数组名，n是x中数据个数，max存放最大值，d存放最大值所在元素的下标

void fun1(int x[],int n,int *max,int *d){    //如果传的是指针变量，调用是需要加*号。
    int i;
    *d = 0;
    *max = x[0];
    for (i=0; i<n; i++) {
        if(x[i]>*max){
            *max=x[i];
            *d=i;
        }
    }
}

// 题目 编写一个fun函数，他的功能是：将ss所指字符中所有下标为奇数位置上的字母转换为大写(若该位置上不是字母，则不转换)

void fun2(char *ss){
    int i;
    for (i=1; ss[i]!='\0'; i+=2) {
        if (ss[i]>='a' && ss[i]<='z') {
            ss[i]-=32;
        }
    }
}

// 题目 请编写fun函数，其功能是：将s所指字符串中除了下标为偶数、同时ascii值也为偶数的字符外，其余的全部删除，串中剩余字符所形成的一个新串放在t所指的一个数组中

// 分析题意：将下标为偶数 && ascii也为偶数的字符 存入t所指向的数组中
void fun3(char s[],char t[]){
    int i,n=0;
    for (i=0; s[i]!='\0'; i+=2) {
        if (s[i]%2==0) {    //取s[i]的值 和 2求余。如果=0 则说明 ascii是偶
            t[n]=s[i];
            n++;
        }
    }
    t[n]='\0';
}

// 总结：
// 只让写fun函数
// 避免使用 #include <string.h>
// 如果一定要用字符串函数，#include <string.h> 和 #include <stdio.h>都写上
// 函数的传参：
// char a[] 与 char *a 传数组 字符串 效果相同；
// char a 和 char *a 不相同，一个是变量 一个是指针变量。指针变量的值与实参相通(看成 一个指针 指向实参)，变量则是一个新的变量


// main函数 在这里不起作用，不写main函数编辑器报错
int main(){
    
}

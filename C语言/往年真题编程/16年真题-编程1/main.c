//
//  main.c
//  16年真题-编程1
//
//  Created by 赵同学 on 2022/3/24.
//
//  已知数组 int a[10]={1,3,5,7,9,11,13,15,17,19};请按下列要求用 C 语言编写程序。
//  编写函数 void swap(int *arr,int n){......}，实现将数组 arr 的前 n 个元素逆序排列，即 arr[0]与 arr[n-1]交换，arr[1]与 arr[n-2]交换......(15 分)
//  编写主函数 main(){......}，将数组 a 按原顺序输出后，调用 swap()对数组 a 的全部元素进行逆序排列，然后再次输出数组 a。(10 分)

#include <stdio.h>

void swap(int *arr,int n){
    int temp,i,j,m=(n-1)/2;
    for (i=0; i<=m; i++) {
        j=n-i-1;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

int main(){
    int a[10]={1,3,5,7,9,11,13,15,17,19},i;
    for (i=0; i<10; i++) {
        printf("%d,",a[i]);
    }
    printf("\n");
    swap(a,10);
    for (i=0; i<10; i++) {
        printf("%d,",a[i]);
    }
}


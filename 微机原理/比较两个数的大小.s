//
//  比较两个数的大小.s
//  专接本
//
//  Created by 赵同学 on 2022/5/28.
//
// 题目 比较2个数的大小(求最大，求最小)A放最大，B放最小

DATA SEGMENT
    A DB 12H
    B DB 24H
DATA ENDS
CODE SEGMENT
    ASSUMME CS:CODE,DS:DATA
    START:
        MOV AX,DATA
        MOV DS,AX
        
        MOV AL,A    ;A 放入 AL
        CMP AL,B    ;AL和B比较
        JA EXIT     ;如果AL>B 符合题意 跳转到EXIT，否则向下执行进行 A和B交换位置
        MOV BL,B    ;B 放入BL
        MOV A,BL    ;BL给A
        MOV B,AL    ;AL给B

    EXIT:
        MOV AH,4CH
        INC 21H
CODE ENDS
END START

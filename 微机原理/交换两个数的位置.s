//
//  交换两个数的位置.s
//  专接本
//
//  Created by 赵同学 on 2022/5/28.
//
DATE SEGMENT
    A DB 12H    ;变量A 字节类型
    B DB 24H    ;变量B 字节类型
DATE ENDS
CODE SEGMENT
    ASSUME CS:CODE,DS:DATA
    START:
        MOV AX,DATA
        MOV DS,AX

        MOV AL,A
        MOV BL,B
        MOV A,BL
        MOV B,AL

        MOV AH,4CH
        INC 21H

CODE ENDS
END START

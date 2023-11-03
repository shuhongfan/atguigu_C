//
// Created by shkstart on 2023/8/24.
// 布尔类型的使用


#include <stdio.h>
#include <stdbool.h>

//使用宏定义
#define TRUE 1
#define FALSE 0
#define BOOL int

int main(){

    //第1种处理方式
    //c89中，如果想使用布尔类型的话。使用0表示false、假、否；使用1(或非0)表示true、真、是
    int handsome = 1;
    handsome = 0;

    if (handsome) {
        printf("我好帅!\n");
    }

    //第2种处理方式
    BOOL handsome1 = TRUE;
    if(handsome1){
        printf("好帅!\n");
    }

    //第3种处理方式
    //C99 标准添加了类型 _Bool，表示布尔值，即逻辑值true和false。
    _Bool isBeauty = 1;
    if(isBeauty){
        printf("你是一个美女");
    }

    //第4种处理方式
    //C99还提供了一个头文件 stdbool.h，文件中定义了`bool`代表`_Bool`
    bool isFlag = true;
    if (isFlag)
        printf("你好毒~~\n");

    return 0;
}

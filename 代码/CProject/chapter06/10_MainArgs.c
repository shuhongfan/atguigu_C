//
// Created by shkstart on 2023/9/27.
//
#include <stdio.h>

int main(int argc, char *argv[]) {
    //函数体
    printf("argc = %d\n",argc);

    for(int i = 0;i < argc;i++){
        printf("%s\n",argv[i]);
    }

    return 0;
}
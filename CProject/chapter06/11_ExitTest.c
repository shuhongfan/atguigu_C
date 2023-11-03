//
// Created by shkstart on 2023/9/27.
//

#include <stdio.h>
#include <stdlib.h>

void show(){
    printf("2222");
    exit(EXIT_SUCCESS);  //退出当前程序
    printf("3333");
}


void print(void) {
    printf("something wrong!\n");
}



int main(){

    printf("1111");

    //show();

    printf("4444");


    atexit(print); //在程序结束之前，需要必须做的相关操作。比如：资源的关闭，内存中临时数据的持久化存储。
    exit(EXIT_FAILURE);

}
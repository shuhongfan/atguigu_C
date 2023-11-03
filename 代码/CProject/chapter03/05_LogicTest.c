//
// Created by shkstart on 2023/8/25.
// 测试逻辑运算符的使用

/*
 *  &&   ||  !
 *
 * */
#include <stdio.h>

int main(){
    /*
     *  && 短路的现象
     *
     *  a && b
     *  - 当 a 为假(或0)时，因为a && b 结果必定为 0，所以不再执行表达式 b
     *  - 当 a 为真(非0)时，因为a && b 结果不确定，所以会继续求解表达式b
     * */
    int a1 = 10;
    int b1 = 10;
    if(a1 > 5 && b1++ > 0){
        printf("yes\n");
    }else{
        printf("no\n");
    }
    printf("b1 = %d\n",b1); //11


    int a2 = 10;
    int b2 = 10;
    if(a2 > 20 && b2++ > 0){
        printf("yes\n");
    }else{
        printf("no\n");
    }
    printf("b2 = %d\n",b2); //10




    return 0;
}

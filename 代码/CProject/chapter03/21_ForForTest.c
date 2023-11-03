//
// Created by shkstart on 2023/8/26.
// 嵌套循环的测试

/*
 * 1. 什么是嵌套循环？ 一个循环结构A的循环体是另一个循环结构B。比如，for循环里面还有一个for循环，就是嵌套循环。
 * 其中，for ,while ,do-while均可以作为外层循环或内层循环。
 *  - 外层循环：循环结构A
 *  - 内层循环：循环结构B
 *
 * 2. 技巧：外层控制行数，内层控制列数。
 *
 * 3. 外层循环共循环m次，内层循环需循环n次，则内层循环的循环体共执行m * n次。
 *
 * */

#include <stdio.h>

int main(){

    /*
     * 输出：
     * ******
     * ******
     * ******
     * ******
     * ******
     * */
    for(int j = 1;j <= 5;j++){  //外层循环
        for(int i = 1;i <= 6;i++){  //内层循环
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    /*          i       j（*的个数）
     *  *       1       1
        **      2       2
        ***     3       3
        ****    4       4
        *****   5       5
     *
     * */

    for(int i = 1;i <= 5;i++){
        for(int j = 1;j <= i;j++){
            printf("*");
        }
        printf("\n");
    }
    //或者
//    int i,j;
//    for(i = 1;i <= 5;i++){
//        for(j = 1;j <= i;j++){
//            printf("*");
//        }
//        printf("\n");
//    }

    /*
     * 实现九九乘法表
     * */
    for(int m = 1;m <= 9;m++){
        for(int n = 1;n <= m;n++){
            printf("%d*%d=%d  ",m,n,m*n);
        }
        printf("\n");
    }

    /*
     * 将如下的for循环改写为while循环
     * int i,j,count=0;
        for(i=0;i<100;i++){
         for(j=100;j>=i;j-=2)  {
           count+=j-i;
         }
        }
     *
     */
    int i = 0,j = 100,count = 0;
    while(i<100){
        while(j>=i){
            count+=j-i;
            j-=2;
        }
        i++;
    }

    return 0;
}

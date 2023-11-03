//
// Created by shkstart on 2023/8/26.
// break和continue的课后练习


#include <stdio.h>
#include<math.h>
int main(){

    /* 练习1：
     * 要求输出100～200之间的不能被3整除的数。
     * */
    /*for(int i = 100;i <= 200;i++){
        if(i % 3 == 0){
            continue;
        }
        printf("%d\n",i);

    }*/

    /*
     * 练习2：
     * 编程求100～200间的全部素数
     *
     * 素数（或质数）：只能被1和它本身整除的自然数。 ---> 除了1和它本身之外，没有其它的约数
     *
     *
     * */

    int count = 0;//记录约数的个数

    for(int i = 100;i <= 200;i++){

        for(int j = 2;j <= sqrt(i);j++){ //提升性能
        //for(int j = 2;j < i;j++){

            if(i % j == 0){
                count++;
                break; //提升性能
            }
        }

        //判断count是否为0，如果为0，则为素数
        if(!count){//if(count == 0){
            printf("%d\n",i);
        }

        count = 0; //重置count

    }


    return 0;
}



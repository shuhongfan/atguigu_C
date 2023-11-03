//
// Created by shkstart on 2023/9/27.
//

#include <stdio.h>

/*
 * 1. main()函数中可以调用其它函数，非main()函数中是不能调用main()函数的。
 * 2. 非main()函数之间可以相互调用。
 * 3. 将实参传递给函数的形参，要求实参的类型与形参的类型一致即可，即可以自动转换就可以。
 */
void hello1(){
    printf("hello1\n");
//    main();
}

void hello2(){
    printf("hello2\n");

    hello1();
}

void hello3(int num){
    printf("hello%d\n",num);
}


int main(){
    hello1();

    hello2();

    short s = 3;
    hello3(s);

//    hello3(3,5); //报错，因为hello3()只有一个形参，不能非1个实参的情况。

}
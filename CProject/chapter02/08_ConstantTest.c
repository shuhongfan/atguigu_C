//
// Created by shkstart on 2023/8/24.
// 关于常量的测试

#include <stdio.h>

#define ZERO 0
#define PI 3.1415


//使用enum定义枚举类
enum Sex{
    //括号中的MALE,FEMALE,SECRET是枚举常量
    MALE,
    FEMALE,
    SECRET
};

int main(){
    //1.字面常量
    3.14;//字面常量
    1000;//字面常量

    //2. #define
    printf("zero = %d\n",ZERO);

//    ZERO = 1; //不可以重新赋值

//    PI = 3.14159; //不可以重新赋值

    double radius = 2.3;
    double area = PI * radius * radius;
    printf("area = %.2lf\n",area);

    //3. C99中新的声明方式,使用const限定
    const int num = 10;
//    num = 20;

    //4. 定义枚举常量
    //枚举常量
    printf("%d\n", MALE);
    printf("%d\n", FEMALE);
    printf("%d\n", SECRET);
    //注：枚举常量默认是从0开始，依次向下递增1的

    return 0;
}

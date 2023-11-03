//
// Created by shkstart on 2023/10/10.
// 测试结构体指针的使用

#include <stdio.h>


//声明一个结构体
struct Person {
    char name[20];
    int age;
};

int main() {

    struct Person per1 = {.name="Tom", .age = 12};
    //声明结构体指针
    struct Person *per_ptr = &per1;

    printf("%s\n",(*per_ptr).name);
    (*per_ptr).age = 20;
    printf("%d\n",(*per_ptr).age);


    return 0;
}

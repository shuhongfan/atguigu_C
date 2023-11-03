//
// Created by shkstart on 2023/10/10.
// 测试结构体数组的使用

#include <stdio.h>

struct Person {
    char name[20];
    int age;
};

//对应着1.2的方式2
struct Student {
    char *name;
    int age;
} stus[3];

//对应着2.2的方式2
struct Student1 {
    char *name;
    int age;
} stus1[2] = {{"Tom",12},{"Jerry",23}};

int main() {
    //1. 如何创建结构体数组
    //1.1 方式1：声明结构体之后，声明结构体数组
    struct Person pers[3];

    //1.2 方式2：声明结构体的同时，创建结构体数组


    //2. 如何给结构体数组的元素赋值
    //2.1 方式1，对应着1.1的方式1
    struct Person pers1[3] = {{.name = "Tom", .age = 12},
                              {.name = "Jerry", .age = 23},
                              {.name = "Rose", .age = 18}};

    struct Person pers2[] = {{.name = "Tom", .age = 12},
                              {.name = "Jerry", .age = 23},
                              {.name = "Rose", .age = 18}};

    struct Person pers3[] = {"Tom", 12,
                             "Jerry", 23,
                             "Rose", 18};

    //2.2 方式2，对应着1.2的方式2

    //3.如何调用数组的元素（即为结构体变量）的内部的成员（即为结构体变量的内部成员）
    //3.1 方式1：使用数组角标方式
    printf("%s\n",pers1[2].name);

    //3.2 方式2：使用指向数组或数组元素的指针(下节讲)
    struct Person *ptrPerson;
    ptrPerson = &pers1[1];
    printf("%s\n",ptrPerson->name);


    return 0;
}

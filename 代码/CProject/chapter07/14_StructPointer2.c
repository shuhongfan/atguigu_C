//
// Created by shkstart on 2023/10/10.
// 结构体指针中 -> 符号的使用

#include <stdio.h>

struct Person {
    char *name;
    int age;
    char *address;
};


//情况2：
void addAge1(struct Person *per) { //形参：结构体指针；参数传递机制：地址传递
//    (*per).age = (*per).age + 1;
    per->age = per->age + 1;
}

int main() {
    struct Person p2 = {"Tom", 20, "北京市海淀区"};
    addAge1(&p2);
    printf("age = %d\n", p2.age); // 输出 21

    return 0;
}
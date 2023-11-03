//
// Created by shkstart on 2023/10/10.
/*
 * （1）编写一个Dog结构体，包含name(char[10])、age(int)、weight(double)属性

 （2）编写一个say函数，返回字符串，方法返回信息中包含所有成员值。

 （3）在main方法中，创建Dog结构体变量，调用say函数，将调用结果打印输出。
 */

#include <stdio.h>
#include <string.h>


struct Dog {
    char name[10];
    int age;
    double weight;
};

//方式1：
char *say(struct Dog dog) {
    static char info[100]; //需要将局部变量info声明为static的，确保在say函数结束以后，不要销毁。

    sprintf(info, "Name: %s, Age: %d, Weight: %.2lf", dog.name, dog.age, dog.weight);

//    strcpy(dog.name,"小花");

    return info;
}

//方式2：
char *say1(struct Dog *dog_ptr) {
    static char info[100]; //需要将局部变量info声明为static的，确保在say函数结束以后，不要销毁。

    sprintf(info, "Name: %s, Age: %d, Weight: %.2lf", (*dog_ptr).name, (*dog_ptr).age, (*dog_ptr).weight);

//    strcpy((*dog_ptr).name,"小花");

    return info;
}

int main() {
    //声明结构体变量并初始化其内部的成员
    struct Dog myDog;
    strcpy(myDog.name, "大黄");
    myDog.age = 2;
    myDog.weight = 2.3;

    char *result = say(myDog);
    printf("info = %s\n",result);

//    printf("name = %s\n",myDog.name);


    char *result1 = say1(&myDog);
    printf("info = %s\n",result1);

//    printf("name = %s\n",myDog.name);

    return 0;
}
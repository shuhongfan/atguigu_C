//
// Created by shkstart on 2023/10/11.
// 测试typedef的使用

#include <stdio.h>

//1.场景1：给基本数据类型起别名
typedef int Integer;

typedef unsigned char Byte;


//2. 场景2：给结构体、共用体起别名
//写法1：
struct Student{
    char name[20];
    int age;
};

typedef struct Student MyStudent;

//写法2：
typedef struct Dog{
    char name[20];
    int age;
}MyDog;

//写法3：
typedef struct{   //匿名结构体
    char name[20];
    int age;
}MyDog1;

typedef union Data{
    char c;
    float f;
    short s;
} MyData;

//3. 场景3：给指针类型起别名
typedef int * INT_PTR;

typedef char * String;

//4. 场景4：给数组类型起别名
typedef int FIVE_INTS[5]; //FIVE_INTS 是int [5]的别名

typedef int * PTR_INTS[2];   //PTR_INTS是 int * [2]的别名,指针数组

//5. 场景5：给函数起别名
typedef int (*PTR_FUNC)(int,int);

int max(int a,int b){
    int c = (a > b)? a : b;
    return c;
}

int min(int a,int b){
    int c = (a < b)? a : b;
    return c;
}

int main(){

    //测试1：
    int i = 10;
    Integer j = 10;

    unsigned char c1 = 10;
    Byte c2 = 10;

    //测试2：
    struct Student s1;
    MyStudent s2;

    struct Dog dog1;
    MyDog dog2;

    MyDog1 dog3;

    union Data data1;
    MyData data2;

    //测试3：
    int num = 10;
    int * int_ptr1;
    int_ptr1 = &num;
    printf("%d\n",*int_ptr1);

    INT_PTR int_ptr2;
    int_ptr2 = &num;
    printf("%d\n",*int_ptr2);


    char * str1 = "hello";
    String str2 = "hello";

    //测试4：
    int arr1[5] = {1,2,3,4,5};
    FIVE_INTS arr2 = {1,2,3,4,5};

    //测试指针数组
    int a = 10,b = 20;
    int * arr3[2] = {&a,&b};

    PTR_INTS arr4 = {&a,&b};

    //测试5：
    //复习：函数指针的使用
    int (*ptr_compare)(int,int);  //函数指针
    ptr_compare = &max;
    //调用函数指针对应的函数
    int result = (*ptr_compare)(10,15);
    printf("%d\n",result);

    //使用别名
    PTR_FUNC ptr_func = &min;
    int result1 = (*ptr_func)(12,24);
    printf("%d\n",result1);

    return 0;
}

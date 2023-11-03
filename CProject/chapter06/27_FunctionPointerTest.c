//
// Created by shkstart on 2023/10/8.
// 测试函数指针的使用
// 函数指针：即为指向函数的指针
// 声明格式：返回值类型 (*指针变量名)(参数列表);

#include <stdio.h>

void print(int m){
    printf("%d\n",m);
}

int max(int m,int n){
    return (m > n)? m : n;
}

int min(int m,int n){
    return (m < n)? m : n;
}

int main(){
    //举例1：
    //声明一个函数指针
    void (*print_pointer)(int);
    //赋值操作
    print_pointer = &print;

    //函数的调用
    //方式1：以前的方式：使用函数名
    print(10);
    //方式2：现在的方式：使用函数指针
    (*print_pointer)(10);

    //举例2：
    //声明一个函数指针
    int (*pointer1)(int,int);
    //赋值操作
    pointer1 = &max;

    //函数的调用
    //方式1：使用函数名的方式
    int bigger = max(10,20);
    printf("%d\n",bigger);
    //方式2：使用函数指针的方式
    bigger = (*pointer1)(20,30);
    printf("%d\n",bigger);


    //测试：
    //C 语言规定，函数名本身就是指向函数代码的指针，通过函数名就能获取函数地址。
    // 也就是说， print 和 &print 是一回事。
    if(print == &print){
        printf("11111");
    }


    return 0;
}

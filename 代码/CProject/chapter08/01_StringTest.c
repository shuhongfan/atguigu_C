//
// Created by shkstart on 2023/10/12.
// 测试字符串的使用

#include <stdio.h>
#include <string.h>

int main(){

    //声明字符串变量的方式
    //方式1：使用字符数组
    char s1[] = "hello";
    printf("%d\n",sizeof(s1)); //6

    //方式2：使用字符指针
    char * s2 = "hello";


    //对比：字符指针和字符数组
    char str1[] = "hello"; //新开辟的空间，保存数组中的数据
    char str2[] = "hello"; //新开辟的空间，保存数组中的数据
    printf("%p\n",str1); //000000f4a93ff81a
    printf("%p\n",str2); //000000f4a93ff814

    char * str3 = "hello";
    char * str4 = "hello"; //与前一个str3的数据是共享的，存在于常量区
    printf("%p\n",str3); //00007ff6842ca004
    printf("%p\n",str4); //00007ff6842ca004

    //测试：
    char s[] = "hello";
    //s = "world"; // 报错

    char arr[10];
    //arr = "hello"; // 报错
    strcpy(arr,"hello");

    return 0;
}
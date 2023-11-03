//
// Created by shkstart on 2023/9/2.
// 字符串的表示：字符数组 与 字符指针变量

#include <stdio.h>


int main() {

    //知识点1：如何表示一个字符串
    //方式1：使用字符数组
//    char str1[] = "hello tom";
//    printf("%p\n",str1); //000000ef2b7ffa3e
//    printf("%s\n",str1); //hello tom

    //方式2：使用字符指针变量
//    char *pStr1 = str1; //将str1[0]的地址赋给pStr1
//    printf("%p\n",pStr1); //000000ef2b7ffa3e
//    printf("%s\n",pStr1); //hello tom
//
//    char *pStr2 = "hello tom";
//    printf("%p\n",pStr2); //00007ff79ad5a008
//    printf("%s\n",pStr2); //hello tom

    //知识点：两种方式的对比
    //数组名是一个常量，在定义好数组以后，不可以给数组重新赋值为一个新的数组
    //但是可以通过角标的方式获取或修改指定索引位置上的元素值。
//    char str[14];
//    str[0] = 'i'; //正确
//    str = "hello Tom"; //错误

    //指针变量是一个变量，可以多次重新赋值
//    char * pStr = "hel";
//    pStr = "hello tom"; //正确

    //知识点3：体会字符串的不可变的特性
    //举例1：针对于整型数组、整型指针变量
//    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//
//    int *p = arr;
//
//    printf("%d\n", p[1]); //2
//    printf("%d\n", *(p + 1)); //2
//
//    p[1] = 50;
//    printf("%d\n", p[1]); //50
//    printf("%d\n", arr[1]);  //50
//
//    //
//    int num = 30;
//    p = &num;
//    printf("%d\n",*p);    //30
//    printf("%d\n",p[0]);  //30

    //举例2：字符数组、字符指针变量
    //测试1：
//    char arr[] = "hello";
//    arr[1] = "m";    	//运行时错误
//    printf("%s\n",arr);

    //测试2：
//    char *pStr = "hello";
//    pStr = "hello tom"; //正确
//
//    pStr[1] = 'm';      //运行时错误
//    printf("%s\n",pStr);

    return 0;
}

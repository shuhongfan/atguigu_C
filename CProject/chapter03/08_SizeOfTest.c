//
// Created by shkstart on 2023/8/25.
// 测试sizeof运算符的使用
/*
 * 1.sizeof 运算符：sizeof(参数)
 *  - 参数可以是`数据类型`的关键字，也可以是`变量名`或某个`具体的值`。
 *  - 返回某种数据类型或某个值占用的字节数量。
 *
 * 2. sizeof 运算符的返回值类型，由具体的操作系统决定的。
 *    C 语言提供了一个解决方法，创造了一个类型别名 `size_t` ，用来统一表示 sizeof 的返回值类型
 *
 * 3. printf() 有专门的占位符 `%zd` 或 `%zu` ，用来处理 size_t 类型的值。
 * */

#include <stdio.h>

int main(){
    //情况1：
    int cap1 = sizeof(int); //返回int类型占用的字节数的大小
    printf("%d\n",cap1); //4

    int cap2 = sizeof(double);
    printf("%d\n",cap2);//8

    //情况2：
    float f1 = 12.3F;
    int cap3 = sizeof(f1); //返回变量f1占用的字节数的大小
    printf("%d\n",cap3); //4

    //情况3：
    int cap4 = sizeof(123);
    printf("%d\n",cap4); //4


    //测试sizeof返回值类型
    size_t cap = sizeof(int);
    printf("%zd\n",sizeof(int));

    return 0;
}

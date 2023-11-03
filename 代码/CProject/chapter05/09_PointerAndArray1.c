//
// Created by shkstart on 2023/9/1.
// 测试：一维数组中指针的使用2

#include <stdio.h>


int main(){

    /*
     * 重点：
     *
     * 前提：
     * int a[10] = {1,2,3,4,5,6,7,8,9,10};
     * int *p = &a[0];
     *
     * a[0] :表示a[0]的数据值
     * a[0]的地址：&a[0]、p、a
     * a[0]的数据值：a[0]、*p、*a
     *
     * a[i] :表示a[i]的数据值
     * a[i]的地址：&a[i]、p + i、a + i
     * a[i]的数据值：a[i]、*(p + i)、*(a + i)
     *
     */

    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p = &a[0];
    //等同于 int *p; p = a;

    printf("%p\n",&a[0]);
    printf("%p\n",p);
    printf("%p\n",a);

    printf("%d\n",a[0]);
    printf("%d\n",*p);
    printf("%d\n",*a);

    printf("%p\n",&a[2]); //000000d2e85ffac8
    printf("%p\n",p + 2); //000000d2e85ffac8
    printf("%p\n",a + 2); //000000d2e85ffac8

    printf("%d\n",a[2]); // 3
    printf("%d\n",*(p + 2)); // 3
    printf("%d\n",*(a + 2)); // 3

    return 0;
}


//
// Created by shkstart on 2023/9/1.
// 测试：一维数组中指针的使用1

#include <stdio.h>


int main(){

    int a[10] = {2,4,6,8,10,12,14,16,18,20};

    int *p;
    p = &a[0]; //理解：将a[0]位置的数据2对应的地址赋给p

    int *q;
    q = a;  //理解：将a[0]的地址赋给q

    printf("%p\n",p);
    printf("%p\n",q);

    /*
     * 复习：
     * scanf("%d",整型变量的地址)
     *
     * */
    //举例：
    char arr[10];
    scanf("%s",arr);  //此时arr前不需要添加&
    puts(arr);



    return 0;
}

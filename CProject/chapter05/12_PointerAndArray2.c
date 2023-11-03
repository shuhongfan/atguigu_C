//
// Created by shkstart on 2023/9/1.
// 测试：一维数组中指针的使用3

#include <stdio.h>


int main(){

    int a[5] = {1,2,3,4,5};

    int *p;
    p = a; //将a[0]位置的地址赋给p
    printf("%d\n",*(p + 2));

    p = a + 1;
    printf("%d\n",*(p + 2));

    //知识点1：p[i] ：使用带角标的指针
    printf("%d\n",p[2]); //以为与a[2]的值相等，实际是不相等的。因为p指向了数组中角标1的位置


    //知识点2：&数组名
    printf("%p\n",a); //000000dcdfbffca0   a表示a[0]元素的地址
    printf("%p\n",&a); //000000dcdfbffca0  &a表示a数组的地址

    printf("%p\n",a + 1); //a + 1:表示a[1]元素的地址
    printf("%p\n",&a + 1);

    return 0;
}

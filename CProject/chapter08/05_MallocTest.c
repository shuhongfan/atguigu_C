//
// Created by shkstart on 2023/10/12.
// 测试malloc()函数的使用 、free()函数

#include <stdio.h>
#include <stdlib.h>


//声明结构体
struct Node{
    int data;
    struct Node * next;
};

typedef struct BTNode{
    int data;
    struct BTNode *lchild;
    struct BTNode *rchild;
}BTNode;

int main(){

    //函数原型：void *malloc(unsigned int size);

    //举例1：给int类型的变量分配空间
    int *ptr_i;
    ptr_i = (int *)malloc(sizeof(int));
    *ptr_i = 10;
    printf("%d\n",*ptr_i);

    //举例2：给int类型的数组分配空间
    int arrLen = 10;
    int *ptr_arr;
    ptr_arr = (int *)malloc(arrLen * sizeof(int));
    //初始化数组元素
    for(int i = 0;i < arrLen;i++){
        ptr_arr[i] = i;
    }

    //举例3：给结构体变量分配空间
    struct Node *ptr_node;
    ptr_node = (struct Node *)malloc(sizeof(struct Node));


    BTNode * ptr_btNode;
    ptr_btNode = (BTNode *)malloc(sizeof(BTNode));

    //关于NULL的判断
    if(ptr_node != NULL){ //意味着分配成功了
        //针对于此数据的初始化、运算等操作
        //...


        //释放内存空间
        free(ptr_node);

    }else{ //意味着分配失败

    }


    //如果没有在程序最后执行free()函数释放动态分配的内存，则在当前函数调用结束后，此内存空间没有被释放，存在内存的泄漏！
//    free(ptr_i);
//    free(ptr_arr);
//    free(ptr_btNode);

    return 0;
}

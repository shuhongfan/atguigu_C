//
// Created by shkstart on 2023/10/10.
// 结构体在数据结构中的应用

#include <stdio.h>
#include <malloc.h>

//声明单向链表的结点：结构体
//方式1：
struct Node {
    int data;           //这里默认的是int型，如需其他类型可修改
    struct Node *next;  //指向Node型变量的指针
};

//方式2：
typedef struct Node1 {
    int data;           //这里默认的是int型，如需其他类型可修改
    struct Node1 *next;  //指向Node型变量的指针
} LNode;


//声明二叉树的结点：结构体
//方式1：
struct BTNode{
    int data;
    struct BTNode *lchild;//指向左子树
    struct BTNode *rchild;//指向右子树
};
//方式2：
typedef struct BTNode1{
    int data;
    struct BTNode1 *lchild;//指向左子树
    struct BTNode1 *rchild;//指向右子树
}BTNode1;

int main(){

    //声明结点变量的不同方式
    //方式1：
    //声明单向链表的结点：结构体变量
    struct Node node1;
    LNode node2;

    //声明二叉树的结点：结构体变量
    struct BTNode node3;
    BTNode1 node4;

//    node4.data

    //方式2：
    BTNode1 *node5;
    node5 = (BTNode1 *)malloc(sizeof(BTNode1)); //在堆空间中动态分配一块内存空间

//    node5->data

    free(node5); //释放node5的内存空间

    return 0;
}

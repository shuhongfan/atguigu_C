//
// Created by shkstart on 2023/10/9.
// 测试结构体嵌套

#include <stdio.h>

struct Birthday{
    int year;
    int month;
    int day;
};

struct Employee{

    char *name;
    int age;

//    int year;
//    int month;
//    int day;
    struct Birthday birth;

};

//单链表结构的结点定义如下：
struct Node{
    int data; //结点中保存的数据
    struct Node *next; //结点指针，指向下一个结点元素

};


//另一个声明格式
typedef struct Node1{
    int data; //结点中保存的数据
    struct Node1 *next; //结点指针，指向下一个结点元素
}LNode;

//二叉树结构的结点定义如下：
typedef struct BTNode{
    int data; //结点中保存的数据
    struct BTNode *lchild; //对应左子树
    struct BTNode *rchild; //对应右子树
} BTNode;


int main(){

    struct Employee emp1 = {.name = "Tom",.age = 23,.birth = {.year = 2003,.month = 12,.day = 21}};


    printf("name = %s,age = %d,birth = [year:%d,month:%d,day:%d]\n",emp1.name,emp1.age,
           emp1.birth.year,emp1.birth.month,emp1.birth.day);

    //测试单链表结点
    struct Node node1 = {.data = 10};
    struct Node node2 = {.data = 20,.next = &node1};

    LNode node3 = {.data = 10};
    LNode node4 = {.data = 20,.next = &node3};

    return 0;
}



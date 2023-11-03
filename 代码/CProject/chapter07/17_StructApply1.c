//
// Created by shkstart on 2023/10/10.
// 结构体在数据结构中的应用

#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct StudentNode {
    int id;
    char name[20];
    struct StudentNode *next;
} StuNode;

int main() {

    StuNode *head;

    // 生成一个三个节点的列表 {1001,"Tom"} -> {1002,"Jerry"} -> {1003,"Lily"}
    head = (StuNode *)malloc(sizeof(StuNode));
    head->id = 1001;
    strcpy(head->name, "Tom");

    StuNode *p = (StuNode *)malloc(sizeof(StuNode));
    p->id = 1002;
    strcpy(p->name, "Jerry");
    head->next = p;

    p = (StuNode *)malloc(sizeof(StuNode));
    p->id = 1003;
    strcpy(p->name, "Lily");
    head->next->next = p;

    //遍历链表
    StuNode *cur;
    for (cur = head; cur != NULL; cur = cur->next) {
        printf("id = %d,name = %s\n", cur->id, cur->name);
    }

    return 0;
}
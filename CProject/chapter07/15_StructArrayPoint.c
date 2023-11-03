//
// Created by shkstart on 2023/10/10.
//

#include <stdio.h>

struct Student {
    int id;
    char name[20];
    char gender;
} stu[3] = {{1001, "Tom",   'M'},
            {1002, "Jerry", 'M'},
            {1003, "Lily",  'F'}};



int main(){

    //方式1：
    for(int i = 0;i < 3;i++){
        printf("%d,%s,%c\n",stu[i].id,stu[i].name,stu[i].gender);
    }

    //方式2：
    struct Student *stu_ptr = stu; //将stu[0]数组的首地址赋给指针变量
    for(int i = 0;i < 3;i++){
        printf("%d,%s,%c\n",stu_ptr[i].id,stu_ptr[i].name,stu_ptr[i].gender);
    }

    //方式3：
    struct Student *stu_ptr1;
    for(stu_ptr1 = stu;stu_ptr1 < stu + 3;stu_ptr1++){
        printf("%d,%s,%c\n",stu_ptr1->id,stu_ptr1->name,stu_ptr1->gender);
    }

    return 0;
}
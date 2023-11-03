//
// Created by shkstart on 2023/10/9.
//
#include <stdio.h>

int counter = 10;

void add(){
    counter++;
    printf("counter = %d\n",counter);
}

int main() {
    add();
    add();
    printf("counter = %d\n",counter); //counter = 12
    int counter = 0;
    printf("counter = %d\n",counter); //counter = 100
    return 0;
}
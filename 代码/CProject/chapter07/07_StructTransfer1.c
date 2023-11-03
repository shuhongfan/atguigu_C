//
// Created by shkstart on 2023/10/10.
//
#include <stdio.h>

struct Car {
    char *name;
    double price;
} a = {"Audi A6L", 390000.99};

int main() {
    struct Car b = a;

    printf("%p\n", &a); //00007ff705b59010
    printf("%p\n", &b); //00000053263ffc00

    printf("%p\n", a.name); //00007ff705b5a000
    printf("%p\n", b.name); //00007ff705b5a000

    char *c1 = "hello";
    char *c2 = "hello";
    c1 = "Audi A6L";
    c2 = "Audi A6L";
    printf("%p\n",c1); //00007ff7c67ba000
    printf("%p\n",c2); //00007ff7c67ba000

    return 0;
}
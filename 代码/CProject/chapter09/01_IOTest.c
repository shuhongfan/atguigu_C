//
// Created by shkstart on 2023/10/12.
//
#include <stdio.h>

//int main( ){
//    int c;
//    printf( "Enter a value :");
//    c = getchar();
//
//    printf( "\nYou entered: ");
//    putchar(c);
//    printf("\n");
//
//    return 0;
//}

int main( ){
    char str[100];

    printf( "Enter a value :");
    gets(str); //从键盘输入

    printf( "\nYou entered: ");
    puts( str ); //从屏幕输出

    return 0;
}

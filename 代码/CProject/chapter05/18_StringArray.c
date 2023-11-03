//
// Created by shkstart on 2023/9/2.
// 测试字符串数组的使用

#include <stdio.h>


int main() {

    //方式1：使用二维字符数组表示字符串数组
    char fruit[][7] = {"Apple", "Orange", "Grape", "Pear", "Peach"};

    char weekdays[7][10] = {   //行数7也可以省略
            "Monday",
            "Tuesday",
            "Wednesday",
            "Thursday",
            "Friday",
            "Saturday",
            "Sunday"
    };

    //遍历
    for(int i = 0;i < 7;i++){
        printf("%s ",weekdays[i]);
    }
    printf("\n");

    //方式2：使用字符指针数组表示字符串数组
    char *weekdays1[7] = {  //7也可以省略
            "Monday",
            "Tuesday",
            "Wednesday",
            "Thursday",
            "Friday",
            "Saturday",
            "Sunday"
    };

    char *colors[5] = {"red", "yellow", "blue", "white", "black"};

    //遍历
    for(int i = 0; i< 7;i++){
        printf("%s ",weekdays1[i]);
    }

    return 0;
}


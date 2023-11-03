//
// Created by shkstart on 2023/9/28.
//
#include <stdio.h>

#include <string.h>

void stringSort(char *[], int);

void stringPrint(char *[], int);

int main() {
    char *days[7] = {"Sunday", "Monday",
                     "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    stringSort(days, 7);
    stringPrint(days, 7);

    return 0;
}

void stringSort(char *string[], int n) {
    char *temp;
    //冒泡排序：实现元素从小到大排序
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++)
            if (strcmp(string[j], string[j + 1]) > 0) {
                temp = string[j];
                string[j] = string[j + 1];
                string[j + 1] = temp;
            }
    }
}

void stringPrint(char *string[], int n) {
    for (int i = 0; i < n; i++)
        printf("%s ", string[i]);

}
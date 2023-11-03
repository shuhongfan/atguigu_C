//
// Created by shkstart on 2023/10/8.
// 测试指针函数的使用

#include <stdio.h>
#include <string.h>

//获取两个字符串中较长的那个字符串
char *getMaxLengthStr(char *str1, char *str2) {

    printf("str1的长度是%d,str2的长度是%d\n",strlen(str1),strlen(str2));

    if(strlen(str1) > strlen(str2)){
        return str1;
    }else{
        return str2;
    }


}

int main() {

    char str1[30],str2[30];
    printf("请输入第1个字符串:");
    gets(str1);
    printf("请输入第2个字符串:");
    gets(str2);

    char *maxStr;
    maxStr = getMaxLengthStr(str1,str2);
    printf("较大的字符串是：%s\n",maxStr);


    return 0;
}

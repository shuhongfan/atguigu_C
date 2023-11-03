//
// Created by shkstart on 2023/10/12.
// 测试String中的函数的使用

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main(){
//    char str1[10], str2[] = "China";
//    strcpy(str1, str2);
//
//    printf("%s\n",str1); //China
//
//    //或
////    strcpy(str1, "China"); //参数2，也可以是一个字符串常量
////    printf("%s\n",str1);
//
//    //进一步
//    str1[0] = 'A';
//    printf("%s\n",str1); //Ahina
//    printf("%s\n",str2); //China
//
//
//
//    return 0;
//}

//int main(){
//
//    char str1[10] = "abcde1234", str2[] = "China";
//    strcpy(str1, str2);
//
//    printf("%s\n",str1); //China
//
//    for(int i = 0;i < 10;i++){
//        printf("%c",str1[i]); //
//    }
//    printf("\n");
//
//    return 0;
//}

//int main(){
//
//    char s1[40] = "1234567890";
//    char s2[12] = "helloworld";
//    strncpy(s1, s2, 5);
//    s1[5] = '\0';  //测试这行代码添加的必要性
//    printf("%s\n", s1); //hello67890 --> hello
//
//
//    return 0;
//}

//基本数据类型-->字符串
//int main() {
//    char str1[20]; //字符数组，即字符串
//    char str2[20];
//    char str3[20];
//    int a = 111, b = 222;
//    char c = 'a';
//    double d = 333.444;
//
//
//    sprintf(str1, "%d %d", a, b);
//    sprintf(str2, "%d%c", a, c);
//    sprintf(str3, "%.5f", d);
//    printf("str1=%s\n", str1); //111 222
//    printf("str2=%s\n", str2); //111a
//    printf("str3=%s\n", str3); //333.44400
//
//    return 0;
//}

//字符串 ---> 基本数据类型
int main(){
    char str1[] = "123456";
    char str2[] = "111";
    char str3[] = "12.34";
    char str4[] = "ab";


    int i = atoi(str1);
    int j = atoi(str2);
    short s = atoi(str2);
    double d = atof(str3);
    //char c = atof(str4); //这样的方式是不对的
    char c = str4[0];

    printf("i = %d,j = %d,s = %d,d = %lf,c = %c\n",i,j,s,d,c);




}

//
// Created by shkstart on 2023/8/26.
// 分支结构2：switch-case的使用

/*
 * 1. 格式
 * switch(表达式){
	case 常量值1:
        语句块1;
        //break;
	case 常量值2:
        语句块2;
        //break;
	┇ ┇
	case 常量值n:
        语句块n;
        //break;
	[default:
        语句块n+1;
    ]
}
 *
 * 2. 执行过程
 * 第1步：根据switch中表达式的值，依次匹配各个case。如果表达式的值等于某个case中的常量值，则执行对应case中的执行语句。

第2步：执行完此case的执行语句以后，
              情况1：如果遇到break，则执行break并跳出当前的switch-case结构
              情况2：如果没有遇到break，则会继续执行当前case之后的其它case中的执行语句。--->`case穿透`
		         ...
		        直到遇到break关键字或执行完所有的case及default的执行语句，跳出当前的switch-case结构
 *
 * 3. 说明
 *  > switch中的表达式可以是整型或字符类型。不可以使用浮点类型
 *  > case 后的常量 与表达式进行等值的判断。
 *  > 关注case 中break的使用。从经验上讲，使用switch-case情况下，多数都是带break。
 *  > default : 是可选的，位置也是灵活的。
 *
 * */
#include <stdio.h>

int main(){

    int num = 2;
    switch(num){

        case 0:
            printf("zero\n");
            break;
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        default:
            printf("other\n");
            break;
    }

    //编译不通过
//    float f1 = 12.3F;
//    switch(f1){
//
//    }

    //编译不通过
//    int n = 10;
//    switch(n){
//        case n > 0:
//            //...
//        case n < 0:
//            //...
//    }


    return 0;
}
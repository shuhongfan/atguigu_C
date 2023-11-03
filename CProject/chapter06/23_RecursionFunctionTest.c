//
// Created by shkstart on 2023/10/8.
//

#include <stdio.h>

//练习1：计算1 ~ n的和
//方式1：使用非递归的方式
int getSum(int n) { //说明，默认情况下n >= 1
    int sum = 0; // 记录总和
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

//方式2：使用递归的方式
int getSum1(int n) { //说明，默认情况下n >= 1
    if (n == 1) {
        return 1;
    } else {
        return getSum1(n - 1) + n;
    }

}

//练习2：递归函数计算n!
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return factorial(n - 1) * n;
}

//练习3：计算斐波那契数列的第n项的值
//方式1：使用递归函数实现
int fibonacciRecursion(int n) { //默认n >= 1
    if (n == 1 || n == 2) {
        return 1;
    }else{
        return fibonacciRecursion(n - 1) + fibonacciRecursion(n - 2);
    }
}
//方式2：使用循环方式实现
int fibonacciIteration(int n){
    if(n == 1 || n == 2){
        return 1;
    }

    int a = 1;
    int b = 1;
    int temp;
    for(int i = 3;i <= n;i++){
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main() {

    int n = 5;
    //测试练习1
    int result = getSum(n);
    printf("result = %d\n", result);

    int result1 = getSum1(n);
    printf("result1 = %d\n", result1);
    //测试练习2
    int result2 = factorial(n);
    printf("result2 = %d\n", result2);

    //测试练习3：
    //测试递归的方式
    n = 10;
    int result3 = fibonacciRecursion(n);
    printf("result3 = %d\n", result3);

    //测试循环的方式
    int result4 = fibonacciIteration(n);
    printf("result4 = %d\n", result4);


    return 0;
}
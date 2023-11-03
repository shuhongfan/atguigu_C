//
// Created by shkstart on 2023/9/27.
//

#include <stdio.h>

/*
 * 定义函数max()，求两个double型变量的最大值，求三个double型变量的最大值
 * */

double dualMax(double d1,double d2){
    double d;
    d = (d1 > d2)? d1 : d2;
    return d;
}

double triMax(double d1,double d2,double d3){
    //方式1：
//    double d = (d1 > d2)? d1 : d2;
//    return (d > d3) ? d : d3;
    //方式2：
//    double d = dualMax(d1,d2);
//    return dualMax(d,d3);
    //或
    return dualMax(dualMax(d1,d2),d3);
}

int main(){
    double d1 = 12.3,d2 = 23.4,d3 = 45.6;

    printf("%.2lf和%.2lf的较大值为%.2lf\n",d1,d2, dualMax(d1,d2));
    printf("%.2lf、%.2lf和%.2lf的最大值为%.2lf\n",d1,d2,d3,triMax(d1,d2,d3));


    return 0;
}

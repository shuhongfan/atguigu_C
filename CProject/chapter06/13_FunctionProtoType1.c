//
// Created by shkstart on 2023/9/27.
//

#include <stdio.h>

//声明函数原型
char *getWeekName(int);
char *getMonthName(int);
int isLeapYear(int);
int getTotalDaysOfMonth(int, int);
int getTotalDaysOfYear(int);


int main(){
    int week = 1;
    char * weekInfo = getWeekName(week);
    printf("%d对应的是%s\n",week,weekInfo);

    int month = 3;
    char * monthInfo = getMonthName(month);
    printf("%d对应的月份是%s\n",month,monthInfo);

    int year = 2004;
    int leapYear = isLeapYear(year);
    printf("%d年是闰年吗？%d\n",year,leapYear);

    month = 2;
    int totalDays = getTotalDaysOfMonth(year,month);
    printf("%d年%d月总天数是：%d\n",year,month,totalDays);

    int totalYearDays = getTotalDaysOfYear(year);
    printf("%d年总天数是：%d\n",year,totalYearDays);

    return 0;
}

// 函数：getWeekName
// 描述：根据输入的星期数，返回相应的星期名称
// 参数：week - 代表星期的整数（1表示星期一，7表示星期日）
// 返回值：返回表示星期名称的字符串，如果输入无效则返回空字符串
char *getWeekName(int week) {
    //方式1：
//    switch(week){
//        case 1:
//            return "Monday";
//        case 2:
//            return "Tuesday";
//        case 3:
//            return "Wednesday";
//        case 4:
//            return "Thursday";
//        case 5:
//            return "Friday";
//        case 6:
//            return "Saturday";
//        case 7:
//            return "Sunday";
//    }
//    return ""; //空字符串
    //方式2：
    char * weeks[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    if(week >= 1 && week <= 7){
        return weeks[week - 1];
    }

    return "";

}

// 函数：getMonthName
// 描述：根据输入的月份数，返回相应的月份名称
// 参数：month - 代表月份的整数（1表示一月，12表示十二月）
// 返回值：返回表示月份名称的字符串，如果输入无效则返回空字符串
char *getMonthName(int month) {
    char *months[] = {"January", "February", "March", "April", "May", "June", "July",
                      "August", "September", "October", "November", "December"};

    if(month >= 1 && month <= 12){
        return months[month - 1];
    }

    return "";
}

// 函数：isLeapYear
// 描述：检查输入的年份是否为闰年
// 参数：year - 待检查的年份
// 返回值：如果是闰年则返回1，否则返回0，如果输入为负数则返回-1作为错误标志
//提示：能被4整除但不能被100整除，或者能被400整除的年份，即为闰年。
int isLeapYear(int year) {
    if(year >= 0){
//        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
//            return 1;
//        }
//        return 0;
        //或
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

    }else{
        return -1;
    }
}

// 函数：getTotalDaysOfMonth
// 描述：获取指定年份和月份的总天数
// 参数：year - 年份，month - 月份
// 返回值：返回该月份的总天数，如果输入无效则返回-1作为错误标志
int getTotalDaysOfMonth(int year, int month) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(isLeapYear(year)){ //判断year是否是闰年
        days[1]++;   //2月份是29天
    }

    if(month >= 1 && month <= 12){
        return days[month - 1];
    }

    return -1;
}

// 函数：getTotalDaysOfYear
// 描述：获取指定年份的总天数
// 参数：year - 年份
// 返回值：返回该年份的总天数，如果输入无效则返回-1作为错误标志
int getTotalDaysOfYear(int year) {
    if(year >= 0){
        if(isLeapYear(year)){
            return 366;
        }
        return 365;
    }else{
        return -1;
    }

}


//
// Created by shkstart on 2023/9/27.
//

#include <stdio.h>

// ������getWeekName
// �����������������������������Ӧ����������
// ������week - �������ڵ�������1��ʾ����һ��7��ʾ�����գ�
// ����ֵ�����ر�ʾ�������Ƶ��ַ��������������Ч�򷵻ؿ��ַ���
char *getWeekName(int week) {
    //��ʽ1��
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
//    return ""; //���ַ���
    //��ʽ2��
    char * weeks[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    if(week >= 1 && week <= 7){
        return weeks[week - 1];
    }

    return "";

}

// ������getMonthName
// ����������������·�����������Ӧ���·�����
// ������month - �����·ݵ�������1��ʾһ�£�12��ʾʮ���£�
// ����ֵ�����ر�ʾ�·����Ƶ��ַ��������������Ч�򷵻ؿ��ַ���
char *getMonthName(int month) {
    char *months[] = {"January", "February", "March", "April", "May", "June", "July",
                      "August", "September", "October", "November", "December"};

    if(month >= 1 && month <= 12){
        return months[month - 1];
    }

    return "";
}

// ������isLeapYear
// ������������������Ƿ�Ϊ����
// ������year - ���������
// ����ֵ������������򷵻�1�����򷵻�0���������Ϊ�����򷵻�-1��Ϊ�����־
//��ʾ���ܱ�4���������ܱ�100�����������ܱ�400��������ݣ���Ϊ���ꡣ
int isLeapYear(int year) {
    if(year >= 0){
//        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
//            return 1;
//        }
//        return 0;
        //��
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

    }else{
        return -1;
    }
}

// ������getTotalDaysOfMonth
// ��������ȡָ����ݺ��·ݵ�������
// ������year - ��ݣ�month - �·�
// ����ֵ�����ظ��·ݵ������������������Ч�򷵻�-1��Ϊ�����־
int getTotalDaysOfMonth(int year, int month) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(isLeapYear(year)){ //�ж�year�Ƿ�������
        days[1]++;   //2�·���29��
    }

    if(month >= 1 && month <= 12){
        return days[month - 1];
    }

    return -1;
}

// ������getTotalDaysOfYear
// ��������ȡָ����ݵ�������
// ������year - ���
// ����ֵ�����ظ���ݵ������������������Ч�򷵻�-1��Ϊ�����־
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

int main(){
    int week = 1;
    char * weekInfo = getWeekName(week);
    printf("%d��Ӧ����%s\n",week,weekInfo);

    int month = 3;
    char * monthInfo = getMonthName(month);
    printf("%d��Ӧ���·���%s\n",month,monthInfo);

    int year = 2004;
    int leapYear = isLeapYear(year);
    printf("%d����������%d\n",year,leapYear);

    month = 2;
    int totalDays = getTotalDaysOfMonth(year,month);
    printf("%d��%d���������ǣ�%d\n",year,month,totalDays);

    int totalYearDays = getTotalDaysOfYear(year);
    printf("%d���������ǣ�%d\n",year,totalYearDays);

    return 0;
}
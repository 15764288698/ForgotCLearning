//
// Created by forgot on 2019-08-03.
//
/*1017 A除以B (20 point(s))*/
/*本题要求计算 A/B，其中 A 是不超过 1000 位的正整数，B 是 1 位正整数。你需要输出商数 Q 和余数 R，使得 A=B×Q+R 成立。

输入格式：
输入在一行中依次给出 A 和 B，中间以 1 空格分隔。

输出格式：
在一行中依次输出 Q 和 R，中间以 1 空格分隔。

输入样例：
123456789050987654321 7
输出样例：
17636684150141093474 3*/


#include<stdio.h>
#include<string.h>

//int main() {
//    char a[1001], b[1005];
//    int i, len, temp = 0, n, yushu, count = 0;
//    scanf("%s%d", a, &n);
//    len = strlen(a);
//    temp = a[0] - '0';
////    求第一位的商
//    if (temp >= n) {
//        b[count] = temp / n + '0';
//        count++;
//    }
////    求剩余位的商
//    for (i = 1; i < len; i++) {
//        yushu = temp % n;
//        temp = yushu * 10 + a[i] - '0';
//        b[count] = temp / n + '0';
//        count++;
//    }
//    b[count] = '/0';
////    求余数
//    yushu = temp % n;
//
////    若只有1位数 且A<B，则直接输出余数
//    if (len == 1 && temp < n) {
//        printf("0 %d/n", a[0] - '0');
//    } else {
//        printf("%s %d/n", b, yushu);
//    }
//    return 0;
//}

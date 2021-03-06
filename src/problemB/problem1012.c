//
// Created by forgot on 2019-08-03.
//
/*1012 数字分类 (20 point(s))*/

/*给定一系列正整数，请按要求对数字进行分类，并输出以下 5 个数字：

A
​1
​​  = 能被 5 整除的数字中所有偶数的和；
A
​2
​​  = 将被 5 除后余 1 的数字按给出顺序进行交错求和，即计算 n
​1
​​ −n
​2
​​ +n
​3
​​ −n
​4
​​ ⋯；
A
​3
​​  = 被 5 除后余 2 的数字的个数；
A
​4
​​  = 被 5 除后余 3 的数字的平均数，精确到小数点后 1 位；
A
​5
​​  = 被 5 除后余 4 的数字中最大数字。
输入格式：
每个输入包含 1 个测试用例。每个测试用例先给出一个不超过 1000 的正整数 N，随后给出 N 个不超过 1000 的待分类的正整数。数字间以空格分隔。

输出格式：
对给定的 N 个正整数，按题目要求计算 A
​1
​​ ~A
​5
​​  并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。

若其中某一类数字不存在，则在相应位置输出 N。

输入样例 1：
13 1 2 3 4 5 6 7 8 9 10 20 16 18
输出样例 1：
30 11 2 9.7 9
输入样例 2：
8 1 2 4 5 6 7 9 16
输出样例 2：
N 11 2 N 9*/

#include <stdio.h>

//一开始错了一个用例，看网友分享才发现坑点，A2交错和为0，不代表不存在，故还是要统计A2的数量的
//int main() {
//    int N;
//    scanf("%d", &N);
//
//    int n;
//    int A1 = 0, A2 = 0, A3 = 0, A4 = 0, A5 = 0;
//    int A2flag = 1;
//    int A2Count = 0;
//    double A4Ave;
//    int A4Count = 0;
//
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &n);
//        if (n % 10 == 0) {
//            A1 += n;
//        }
//
//        if (n % 5 == 1) {
//            A2 += n * A2flag;
//            A2Count++;
//            if (A2flag == 1) {
//                A2flag = -1;
//            } else {
//                A2flag = 1;
//            }
//        }
//
//        if (n % 5 == 2) {
//            A3++;
//        }
//
//        if (n % 5 == 3) {
//            A4 += n;
//            A4Count++;
//        }
//
//        if (n % 5 == 4) {
//            if (n > A5) {
//                A5 = n;
//            }
//        }
//    }
//
//    if (A1) {
//        printf("%d ", A1);
//    } else {
//        printf("N ");
//    }
//
//    if (A2Count) {
//        printf("%d ", A2);
//    } else {
//        printf("N ");
//    }
//
//    if (A3) {
//        printf("%d ", A3);
//    } else {
//        printf("N ");
//    }
//
//    if (A4Count) {
//        A4Ave = A4 * 1.0 / A4Count;
//        printf("%.1f ", A4Ave);
//    } else {
//        printf("N ");
//    }
//
//    if (A5) {
//        printf("%d", A5);
//    } else {
//        printf("N");
//    }
//
//    return 0;
//}

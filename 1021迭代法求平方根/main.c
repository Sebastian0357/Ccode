/*
题目描述
用迭代法求 平方根

公式：求a的平方根的迭代公式为： X[n+1]=(X[n]+a/X[n])/2

 要求前后两次求出的差的绝对值少于0.00001。 输出保留3位小数

输入格式
a

输出格式
X的平方根

样例输入
4
样例输出
2.000
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    double x=1.0,x1;
    scanf("%d",&a);
    while(fabs(x-x1)>0.00001)       //判断结束条件
    {
        x1=x;
        x=(x1+a/x1)/2;
    }
    printf("%0.3lf\n",x);
    return 0;
}
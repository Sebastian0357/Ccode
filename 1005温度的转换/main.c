/*
题目描述
输入一个华氏温度，要求输出摄氏温度。公式为 c=5(F-32)/9，取位2小数。

输入
一个华氏温度，浮点数

输出
摄氏温度，浮点两位小数
*/

#include <stdio.h>

int main()
{
	float F;

	scanf("%f",&F);

	printf("c=%.2f\n",5*(F-32)/9);
	return 0;
}
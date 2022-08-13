/*
题目描述
有一分数序列： 2/1 3/2 5/3 8/5 13/8 21/13...... 求出这个数列的前N项之和
保留两位小数。
输入格式
N
输出格式
数列前N项和
样例输入
10
样例输出
16.48
*/
#include <stdio.h>

int main()
{
	int i,n;
	float sum=2,a1=1,a2=2,a3;

	scanf("%d",&n);

	for(i=1;i<n;i++)
	{
		a3=a1+a2;
		a1=a2;
		a2=a3;
		//printf("%.2f\n",a2/a1);
		sum=sum+a2/a1;
	}
	printf("%.2f\n",sum);
	return 0;
}
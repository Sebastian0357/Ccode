/*
题目描述
求Sn=a+aa+aaa+…+aa…aaa（有n个a）之值，其中a是一个数字，为2。 例如，n=5时=2+22+222+2222+22222，n由键盘输入。

输入格式
n

输出格式
Sn的值

样例输入
5
样例输出
24690
*/
#include <stdio.h>

int main()
{
	int n,Sn = 0,i,a = 0;

	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		a = a * 10 + 2;
		Sn = Sn + a;
	}
	printf("%d\n",Sn);
	return 0;
}

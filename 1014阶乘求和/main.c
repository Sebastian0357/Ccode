/*
题目描述
求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n不超过20)。

输入格式
n

输出格式
Sn的值

样例输入
5
样例输出
153
*/

#include <stdio.h>
int main(void)
{
	int n,i,m;
	__int64 Sn = 0, j;
 
	scanf("%d", &n); 
 
	for (i = 1; i <= n; i++)
	{
		j = 1;
		for(m = 0; m < i; m++)
        j *= (m + 1);
		Sn = Sn + j;
	}
	printf("%I64d", Sn); //long long的格式指定符为%lld,vc6不支持longlong型，使用__int64,并用%I64d格式化输出
	return 0;
}
/*
题目描述

猴子吃桃问题。猴子第一天摘下若干个桃子，当即吃了一半
还不过瘾，又多吃了一个。 第二天早上又将剩下的桃子吃掉
一半，又多吃一个。以后每天早上都吃了前一天剩下的一半零
一个。 到第N天早上想再吃时，见只剩下一个桃子了。求第一
天共摘多少桃子。

输入格式
N
输出格式
桃子总数
样例输入
10
样例输出
1534
*/

#include <stdio.h>

int main()
{
	int n,i,p=1;

	scanf("%d",&n);

	for(i=1;i<n;i++)
	{
		p=2*(p+1);
	}

	printf("%d\n",p);
	return 0;
}

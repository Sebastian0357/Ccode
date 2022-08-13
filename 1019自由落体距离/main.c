/*
题目描述
一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。 它在第N次落地时反弹多高？共经过多少米？ 保留两位小数
输入格式
M N
输出格式
它在第N次落地时反弹多高？共经过多少米？ 保留两位小数，空格隔开，放在一行
样例输入
1000 5
样例输出
31.25 2875.00
*/

#include <stdio.h>

int main()
{
	int n,i;
	float m,sum,h;

	scanf("%f%d",&m,&n);

	sum = m;
	h = m/2;
	//printf("%.2f\n",sum);
	//printf("%.2f\n",h);

	for(i=0;i<n-1;i++)
	{
		sum += 2*h;
		h = h/2;
	}

	printf("%.2f %.2f\n",h,sum);

	
	return 0;
}
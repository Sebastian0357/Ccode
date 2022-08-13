/*
题目描述
有三个整数a b c,由键盘输入，输出其中的最大的数。
输入
一行数组，分别为a b c
输出
a b c其中最大的数
*/

#include <stdio.h>

int main()
{
	int arr[3];
	int i;
	int max;

	for(i=0;i<3;i++)
	{
		scanf("%d",&arr[i]);
		printf("",arr[i]);
		

		
	}
	if(arr[0]>arr[1] && arr[0]>arr[2])
	{
		max=arr[0];
	}
	else if(arr[1]>arr[0] && arr[1]>arr[2])
	{
		max=arr[1];
	}
	else
	{
		max=arr[2];
	}
	printf("%d\n",max);

	return 0;
}
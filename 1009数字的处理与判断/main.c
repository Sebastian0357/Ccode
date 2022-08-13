/*
题目描述
给出一个不多于5位的整数，要求 1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字，例如原数为321,应输出123
输入
一个不大于5位的数字
输出
三行 第一行 位数 第二行 用空格分开的每个数字，注意最后一个数字后没有空格 第三行 按逆序输出这个数
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char arr[5];
	int i;
	int len;
	
	scanf("%s",arr);

	len=strlen(arr);
	printf("%d\n",len);		//输出长度

	for(i=0;i<len;i++)		//正向遍历，空格分开，判断是否最后一位
	{
		if(i==len-1)
		{
			printf("%c",arr[i]);
		}
		else
		{
			printf("%c ",arr[i]);
		}
	}
	printf("\n");


	for(i=len-1;i>=0;i--)		//逆向遍历输出
	{
	
		printf("%c",arr[i]);
	}
	printf("\n");

	return 0;
}
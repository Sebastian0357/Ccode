/*
题目描述
给出一百分制成绩，要求输出成绩等级‘A’、‘B’、‘C’、‘D’、‘E’。 90分以及90分以上为A，80-89分为B，70-79分为C，60-69分为D，60分以下为E。
输入
一个整数0－100以内
输出
一个字符，表示成绩等级
*/
#include <stdio.h>

int main()
{
	int score;

	scanf("%d",&score);
	
	switch(score/10)
	{
		case 10:
		case 9: printf("%c\n",'A'); break;
		case 8: printf("%c\n",'B'); break;
		case 7: printf("%c\n",'C'); break;
		case 6: printf("%c\n",'D'); break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0: printf("%c\n",'E'); break;
		default:printf("输入成绩有误\n");

	}

	return 0;
}
/*
��Ŀ����
����һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ���A������B������C������D������E���� 90���Լ�90������ΪA��80-89��ΪB��70-79��ΪC��60-69��ΪD��60������ΪE��
����
һ������0��100����
���
һ���ַ�����ʾ�ɼ��ȼ�
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
		default:printf("����ɼ�����\n");

	}

	return 0;
}
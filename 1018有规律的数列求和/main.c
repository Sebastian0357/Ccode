/*
��Ŀ����
��һ�������У� 2/1 3/2 5/3 8/5 13/8 21/13...... ���������е�ǰN��֮��
������λС����
�����ʽ
N
�����ʽ
����ǰN���
��������
10
�������
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
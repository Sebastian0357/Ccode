/*
��Ŀ����
һ�������ǡ�õ��ڲ�������������������֮�ͣ�������ͳ�Ϊ"����"�� 
���磬6������Ϊ1��2��3����6=1+2+3�����6��"����"�� ������ҳ�N֮�ڵ�����������
���������ʽ���������

�����ʽ
N

�����ʽ
? its factors are ? ? ?

��������
1000
�������
6 its factors are 1 2 3 
28 its factors are 1 2 4 7 14 
496 its factors are 1 2 4 8 16 31 62 124 248 
*/
#include <stdio.h>

int main()
{
	int arr[100],n,i,j,l;

	scanf("%d",&n);

	for(i=1;i<n;i++)
	{
		int sum=0,k=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum+=j;
				arr[k++]=j;
				
			}
		}
		if(sum==i)
		{

			printf("%d its factors are",i);
			for(l=0;l<k;l++)
			{
				printf(" %d",arr[l]);
			}
			printf("\n");
		}
	}
	


	return 0;
}
/*
��Ŀ����
��������������m��n���������Լ������С��������
����
��������
���
���Լ������С������
*/
#include <stdio.h>

int GetMaxFat(int m,int n);
int GetMinMup(int m,int n);
int main()
{
	int n,m;
	scanf("%d %d",&m,&n);
	printf("%d",GetMaxFat(m,n));
	printf(" ");
	printf("%d",GetMinMup(m,n));
	printf("\n");
	
	return 0;
}


int GetMaxFat(int m,int n)	//�������
{
	int p;
	int i=0;
	int maxfat=0;

	if(m<n)
	{
		p=m;
		m=n;
		n=p;
	}
	for(i=n;i>0;i--)
	{
		if(m%i==0 && n%i==0)
		{
			maxfat=i;
			break;
		}
	}


	return maxfat;
}

int GetMinMup(int m,int n)		//��С������
{
	int minmup;

	minmup=m*n/GetMaxFat(m,n);

	return minmup;
}
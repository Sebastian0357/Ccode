/*
��Ŀ����
��Sn=a+aa+aaa+��+aa��aaa����n��a��ֵ֮������a��һ�����֣�Ϊ2�� ���磬n=5ʱ=2+22+222+2222+22222��n�ɼ������롣

�����ʽ
n

�����ʽ
Sn��ֵ

��������
5
�������
24690
*/
#include <stdio.h>

int main()
{
	int n,Sn = 0,i,a = 0;

	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		a = a * 10 + 2;
		Sn = Sn + a;
	}
	printf("%d\n",Sn);
	return 0;
}

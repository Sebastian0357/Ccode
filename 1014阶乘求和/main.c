/*
��Ŀ����
��Sn=1!+2!+3!+4!+5!+��+n!ֵ֮������n��һ������(n������20)��

�����ʽ
n

�����ʽ
Sn��ֵ

��������
5
�������
153
*/

#include <stdio.h>
int main(void)
{
	int n,i,m;
	__int64 Sn = 0, j;
 
	scanf("%d", &n); 
 
	for (i = 1; i <= n; i++)
	{
		j = 1;
		for(m = 0; m < i; m++)
        j *= (m + 1);
		Sn = Sn + j;
	}
	printf("%I64d", Sn); //long long�ĸ�ʽָ����Ϊ%lld,vc6��֧��longlong�ͣ�ʹ��__int64,����%I64d��ʽ�����
	return 0;
}
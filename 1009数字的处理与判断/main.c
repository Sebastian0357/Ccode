/*
��Ŀ����
����һ��������5λ��������Ҫ�� 1��������Ǽ�λ�� 2���ֱ����ÿһλ���� 3�������������λ���֣�����ԭ��Ϊ321,Ӧ���123
����
һ��������5λ������
���
���� ��һ�� λ�� �ڶ��� �ÿո�ֿ���ÿ�����֣�ע�����һ�����ֺ�û�пո� ������ ��������������
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
	printf("%d\n",len);		//�������

	for(i=0;i<len;i++)		//����������ո�ֿ����ж��Ƿ����һλ
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


	for(i=len-1;i>=0;i--)		//����������
	{
	
		printf("%c",arr[i]);
	}
	printf("\n");

	return 0;
}
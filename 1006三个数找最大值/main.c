/*
��Ŀ����
����������a b c,�ɼ������룬������е���������
����
һ�����飬�ֱ�Ϊa b c
���
a b c����������
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
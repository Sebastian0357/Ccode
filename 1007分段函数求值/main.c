/*
��Ŀ����
��һ������
y={  x      x<1
    |  2x-1   1<=x<10
    { 3x-11  x>=10

дһ�γ�������x�����y

����
һ����x

���
һ����y
*/

#include <stdio.h>

int main()
{
	float x,y;
	
	scanf("%f",&x);

	if(x<1)
	{
		y=x;
	}
	else if(1<=x && x<10)
	{
		y=2*x-1;
	}
	else
	{
		y=3*x-11;
	}
	
	printf("%.0f\n",y);
	
	return 0;
}
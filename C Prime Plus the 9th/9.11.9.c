//�˳��������������ݿ����������У������������ݾ�һֱ���У�����Ϊ�ݹ�̫���ջ������С���������ǸĴ���֮����Ȼ�в�ͨ��
//��times����Ϊ-2ʱ��ȡ����times��ֵΪ-4461���ͺ��ԣ�����ԭ��ͽ���취�һ����롣
#include <stdio.h>
void power(double num, int times,double result);
int main(void)
{
	double num;
	int times;
	double result = 1.0;
	printf("Enter a double :");
	scanf_s("%lf", &num);
	printf("Enter an integer :");
	scanf_s("%d", &times);
	power(num, times,result);
	return 0;
}

void power(double num, int times,double result)
{
	if (num == 0)
	{
		if (times == 0)
		{
			printf("0^0 is undefined !\n");
		}	
		printf("The result is %lf", result);
	}
	else if (times == 0)
	{
		result *= 1;
		printf("The result is %lf", result);
	}
	else if (times < 0)
	{
		result *= (1.0 / num);
		times--;
		power(num, times, result);
	}
	else
	{
		result *= num;
		times--;
		power(num,times, result);
	}

	return;
}
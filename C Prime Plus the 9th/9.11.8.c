#include <stdio.h>
void power(double num, int times);
int main(void)
{
	double num = 0;
	int times = 0;
	printf("Enter a double :");
	scanf_s("%lf", &num);
	printf("Enter an integer :");
	scanf_s("%d", &times);
	power(num, times);
	return 0;
}

void power(double num, int times)
{
	double result=1;
	if (num == 0)
	{
		if (times != 0)
		{
			result = 0;
		}
		else
		{
			printf("0^0 is undefined !\n");
			result = 1;
		}
	}
	else if (times == 0)
	{
		result = 1;
	}
	else if (times < 0)
	{
		double mid=1;
		int middle = -times;
		for (int i = 0; i < middle; i++)
		{
			mid *= num;
		}
		result = 1 / mid;
	}
	else
	{
		for (int i = 0; i < times; i++)
		{
			result *= num;
		}
	}
	printf("The result is %lf", result);
	return;
}
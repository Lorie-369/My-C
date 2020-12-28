//此程序求正整数次幂可以正常运行，但是求负数次幂就一直不行，报错为递归太深，堆栈保留大小不够，但是改大了之后仍然行不通。
//当times输入为-2时读取到的times的值为-4461，就很迷？具体原因和解决办法我还在想。
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
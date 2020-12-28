#include <stdio.h>
int Fibonacci(int input);
int main(void)
{
	int input=0;
	int sum = 0;
	printf("Enter the number of the Fibonacci :");
	scanf_s("%d", &input);
	sum=Fibonacci(input);
	printf("The sum is %d !\n", sum);
	return 0;
}

int Fibonacci(int input)
{
	int result = 0;
	if (input == 0)
	{
		result = 0;
	}
	else if (input == 1)
	{
		result = 1;
	}
	else
	{
		result = Fibonacci(input - 1) + Fibonacci(input - 2);
	}
	return result;
}
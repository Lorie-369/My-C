//将任何正整数input换成对应的m进制
#include <stdio.h>
void change(unsigned long n, int m);
int main(void)
{
	unsigned long input;
	int m;
	int i = 0, j = 0;
	printf("Enter the number you want to change :");
	i=scanf_s("%ld", &input);
	printf("Enter the type you want to change :");
	j=scanf_s("%ld", &m);
	while (i == 1 && j == 1)
	{
		printf("The new form of the number is :\n");
		change(input, m);
		printf("\nEnter the number you want to change :");
		i = scanf_s("%ld", &input);
		printf("Enter the type you want to change :");
		j = scanf_s("%ld", &m);

	}
	return 0;
}
void change(unsigned long n, int m)
{
	int mid;
	mid = n % m;
	if (n>=m)
	{
		change(n / m, m);
	}
	printf("%d", mid);
	return;
}
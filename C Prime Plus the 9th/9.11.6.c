#include <stdio.h>
void sort(double* p1, double* p2, double* p3);
int main(void)
{
	double num1,num2, num3;
	double* p1, * p2, * p3;
	printf("Enter three double to sort :\n");
	scanf_s("%lf %lf %lf",&num1,&num2,&num3);
	p1 = &num1;
	p2 = &num2;
	p3 = &num3;
	sort(p1, p2, p3);
	printf("The sorted numbers are :\n%.2lf %.2lf %.2lf",*p1,*p2,*p3);
	return 0;
}

void sort(double* p1, double* p2, double* p3)
{
	double* temp;
	double a = 0;
	temp = &a;
	if (*p1 > * p2)
	{
		*temp = *p2;
		*p2 = *p1;
		*p1 = *temp;
	}
	if (*p1 > * p3)
	{
		*temp = *p1;
		*p1 = *p3;
		*p3 = *temp;
	}
	if (*p2 > *p3)
	{
		*temp = *p2;
		*p2 =* p3;
		*p3 = *temp;
	}
	return;
}

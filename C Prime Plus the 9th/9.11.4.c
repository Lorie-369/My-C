#include <stdio.h>
double harmean(double x,double y);
int main(void)
{
	double x, y,result;
	printf("Enter two double :");
	scanf_s("%lf %lf", &x, &y);
	result = harmean(x, y);
	printf("\nThe harmean is : %lf\n",result);

	return 0;
}
double harmean(double x, double y)
{
	double mid,result;
	mid = (1.0 / x + 1.0 / y) / 2.0;
	result = 1.0 / mid;
	return result;
}
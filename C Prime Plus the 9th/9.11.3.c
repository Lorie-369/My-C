#include <stdio.h>
void print(char x, int row, int column);
int main(void)
{
	char x;
	int row = 0, column = 0;
	printf("Enter a character :");
	scanf_s("%c", &x,sizeof(x));
	printf("Enter the number of the row :");
	scanf_s("%d", &row);
	printf("Enter the number of the column :");
	scanf_s("%d", &column);
	printf("\nThe picture is :\n");
	print(x, row, column);
	return 0;
}

void print(char x, int row, int column)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			printf("%c", x);
		}
		printf("\n");
	}
}
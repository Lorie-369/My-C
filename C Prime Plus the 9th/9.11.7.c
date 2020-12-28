#include <stdio.h>
#include <ctype.h>
#include <string.h>
void search(char str[],int n);
int main(void)
{
	char str[10];
	int n = 0;
	printf("Enter some character .\nEnter # to end the input.\n");
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%c", &str[i], sizeof(str[i]));
		if (str[i] == '#')
		{
			str[i] = '\0';
			break;
		}
	}
	n = strlen(str);
	search(str,n);
	return 0;
}

void search(char str[], int n)
{
	for (int j = 0; j < n; j++)
	{
		int num = 0;
		if (islower(str[j]))
		{
			num = str[j] - 96;
		}
		else if (isupper(str[j]))
		{
			num = str[j] - 64;
		}
		else
			num = -1;
		printf("The %dth : %d\n", j+1, num);
	}
	printf("\n");
	return;
}
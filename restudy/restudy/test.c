#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*int main()
{
	int input;
	scanf("%d", &input);
	while (input != 0)
	{
		int temp = input % 10;
		input = input / 10;
		printf("%d", temp);
	}
	printf("\n");
	return 0;
}

int main()
{
	int input;
	scanf("%d", &input);
	int temp = 0;
	while (input != 0)
	{
		temp = temp * 10 + input % 10;
		input /= 10;
	}
	printf("%d", temp);
	return 0;
}*/
int main()
{
	int sum = 0;
	int factorial = 1;
	for (int i = 1; i <= 100; i++)
	{
		factorial *= i;
		sum += factorial;
	}
	printf("%d\n", sum);
}
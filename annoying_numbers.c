#include <stdio.h>

int main(void)
{
	int a;
	int b[6];
	int i = 0;
	scanf_s("%d", &a);
	while (a >= 10)
	{
		b[i++] = a % 10;
		a = (a - b[i - 1]) / 10;
	}
	b[i] = a;
	printf("%d\n", i + 1);
	b[i + 1] = 10;//end of the string
	for (i = 0; b[i] != 10; i++)
	{
		printf("%d\n", b[i]);
	}
	for (i = 0; b[i] != 10; i++)
	{
		printf("%d", b[i]);
	}	
	system("pause");
}

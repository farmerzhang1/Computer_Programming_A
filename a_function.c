#include <stdio.h>

int main(void)
{
	int a;
	scanf_s("%d", &a);
	if (a < 1)
	{
		printf("%d", a);
	}
	else if (a < 10)
	{
		printf("%d", 2 * a - 1);
	}
	else printf("%d", 3 * a - 11);
}
//练习if else语句的

#include<stdio.h>
int main(void)
{
	int left, day;
	scanf_s("%d%d", &day, &left);
	for (int i = 0; i < day - 1; i++) {
		left = (left + 1) * 2;
	}
	printf("%d", left);
	system("pause");
}

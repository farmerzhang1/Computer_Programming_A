#include <stdio.h>

int main(void)
{
	int a; 
	scanf_s("%d", &a);
	if (a < 60) printf("E");
	else if (a < 70) printf("D");
	else if (a < 80) printf("C");
	else if (a < 90) printf("B");
	else printf("A");
}

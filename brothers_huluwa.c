#include <stdio.h>

long long sum(int n_numbers, int a);

int main(void) {
	int n, a;
	scanf_s("%d%d", &n, &a);
	printf("%lld", sum(n, a));
	system("pause");
}

long long sum(int n_numbers, int a)
{
	long long sum = 0; 
	for (int i = 0; i < n_numbers; i++) sum = sum * 10 + (i + 1) * a;
	return sum;
}

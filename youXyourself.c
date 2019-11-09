#include <stdio.h>
#include <math.h>
int store_digit(int n, int digit[]);

int main(void) {
	int n;
	scanf_s("%d", &n);
	int digit[7];
	int i, j, sum;
	for (i = 1; i <= n; i++) {
		int pos = store_digit(i, digit);
		sum = 0;
		for (j = 0; digit[j] != 10; j++) {
			sum = sum + pow(digit[j], pos);
		}
		if (sum == i) printf("%d\n", i);
	}
	system("pause");
}
int store_digit(int n, int digit[]) {
	int i = 0;
	while (n > 0)
	{
		digit[i++] = n % 10;
		n /= 10;
	}
	digit[i] = 10;
	return i;
}

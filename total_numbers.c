#include <stdio.h>

int main(void)
{
	int n, factor[300];
	int i, j;
	scanf_s("%d", &n);
	for (int k = 1; k <= n; k++)
	{
		for (i = 1, j = 0; i < k; i++) if (k % i == 0) factor[j++] = i;
		factor[j] = 0;
		int sum = 0;
		while (j >= 0) sum += factor[j--];
		if (sum == k) {
			printf("%d its factors are %d", k, 1);
			for (j = 1; factor[j] > 0; j++) printf(",%d", factor[j]);
			putchar('\n');
		}
	}
	system("pause");
}

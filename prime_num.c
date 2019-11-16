#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	int n;
	scanf_s("%d", &n);
	int *num, i, j;
	num = malloc(n * sizeof(int));
	for (i = 0; i < n; i++) scanf_s("%d", &num[i]);
	int max = *num;
	for (i = 0; i < n; i++) if (max < num[i]) max = num[i];
	int *natural_num;
	natural_num = malloc(max * sizeof(int));
	memset(natural_num, 1, sizeof(natural_num));
	for (i = 1; i < max; i++)
	{
		if (natural_num[i])
			for (j = 2 * i + 1; j < max; j += (i + 1)) 
			{
				natural_num[j] = 0;
			}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 1; j < num[i] - 1; j++)
			if (natural_num[j])
				printf("%d ", j + 1);
		putchar('\n');
	}
	system("pause");
}

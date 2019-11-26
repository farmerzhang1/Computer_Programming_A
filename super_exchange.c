#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int *num;
	int i, j;
	int n, m;
	scanf_s("%d%d", &n, &m);
	num = malloc(n * m * sizeof(int));
	for (i = 0; i < n; i++) for (j = 0; j < m; j++) scanf_s("%d", num++);
	num -= n * m;

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", *(num + j * m + i));
		}
		putchar('\n');
	}
	system("pause");
}

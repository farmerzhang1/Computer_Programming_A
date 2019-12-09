#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sort_and_find(void) {
	int i, j, n, mark = 0;
	char name[10][10];
	int num[10];
	for (i = 0; i < 10; i++) scanf("%s %d", &name[i], &num[i]);
	scanf("%d", &n);
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (num[j] == n) mark = j;
			if (num[j] == i+1) {
				printf("%s\n", name[j]);
				break;
			}
		}
	}
	printf("%s", name[mark]);
	system("pause");
}

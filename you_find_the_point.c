#include <stdio.h>
#include <stdlib.h>

int is_the_only_max(int num[][100], int row, int line, int length);
int is_the_only_min(int num[][100], int row, int line, int length);

int main(void)
{
	int m, n;
	int num[100][100];
	scanf_s("%d%d", &m, &n);
	int i, j, flag = 0;
	for (i = 0; i < m; i++) for (j = 0; j < n; j++) scanf_s("%d", &num[i][j]);
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
		{
			if (is_the_only_max(num, i, j, n) && is_the_only_min(num, i, j, m)) {
				printf("%d %d", i, j);
				flag = 1;
				break;
			}
		}
		if (flag) break;
	}
	if (!flag) printf("%d", -1);
	system("pause");
}

int is_the_only_max(int num[][100], int row, int line, int length)
{
	int max = num[row][0];
	int count = 0;
	int ismax = 1;
	for (int i = 1; i < length ; i++)
	{
		if (max < num[row][i]) {
			max = num[row][i];
			count = 0;
		}
		else if (max == num[row][i]) count++;
		if (max > num[row][line]) {
			ismax = 0;
			break;
		}

	}
	if (ismax && count == 0) return 1;
	else return 0;
}

int is_the_only_min(int num[][100], int row, int line, int length)
{
	int min = num[0][line];
	int count = 0;
	int ismin = 1;
	for (int i = 1; i < length ; i++)
	{
		
		if (min > num[i][line]) {
			min = num[i][line];
			count = 0;
		}
		else if (min == num[i][line]) count++;
		if (min < num[row][line]) {
			ismin = 0;
			break;
		}
	}
	if (ismin && count == 0) return 1;
	else return 0;
}

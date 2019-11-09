#include <stdio.h>
#include <string.h>

int find(int a);

int line[11][11];
int group_a[11], group_b[11] = { 0 };
int found[11];

int main(void)
{
	int i;
	for (i = 1; i <= 10; i++)
		scanf_s("%d%d%d%d%d%d%d%d%d%d", &line[i][1], &line[i][2], &line[i][3], &line[i][4], &line[i][5],
			&line[i][6], &line[i][7], &line[i][8], &line[i][9], &line[i][10]);

	for (i = 1; i < 11; i++) {
		memset(found, 0, sizeof(found));
		find(i);
	}
	for (i = 1; i <= 10; i++) printf("%d\n", group_a[i]);
	system("pause");
}

int find(int a) 
{
	int j;
	for (j = 1; j <= 10; j++) {
		if (line[a][j] && !found[j])
		{
			found[j] = 1;
			if (group_b[j] == 0 || find(group_b[j])) {
				group_b[j] = a;
				group_a[a] = j;
				return 1;
			}				
		}
	}
	return 0;
}
/*本次作业最有价值的一道题了吧
用的是匈牙利算法
迭代的过程有意思*/

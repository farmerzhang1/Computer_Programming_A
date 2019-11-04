#include <stdio.h>

int main(void)
{
	int a[4];
	scanf_s("%d%d%d%d", &a[0], &a[1], &a[2], &a[3]);
	int tmp;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (a[j] > a[j + 1]) {
				tmp = a[j]; 
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	printf("%d %d %d %d", a[0], a[1], a[2], a[3]);
	system("pause");
}//本来想说再写一遍quicksort。。最后还是冒泡就好

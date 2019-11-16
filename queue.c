#include <stdio.h>
#include <stdlib.h>

int find_pos(unsigned int arr[], int flag, int length, unsigned int key);

int main(void)
{
	int n, i;
	unsigned int m;
	scanf_s("%d%d", &n, &m);
	unsigned int *num = malloc(n * sizeof(int));//save space
	for (i = 0; i < n; i++) scanf_s("%d", &num[i]);
	int pos;
	if (num[0] <= num[n - 1]) pos = find_pos(num, 1, n, m);
	else pos = find_pos(num, -1, n, m);
	for (i = 0; i <= pos; i++) printf("%d ", num[i]);
	printf("%d ", m);
	for (i = pos + 1; i < n; i++) printf("%d ", num[i]);
	system("pause");
}

int find_pos(unsigned int arr[], int flag, int length, unsigned int key)
{
	int left = 0;
	int right = length - 1;
	if (flag == 1) {
		if (key > arr[right]) return right;
		else if (key < arr[left]) return -1;
		else {
			while (left < right)
			{
				if (arr[(left + right) / 2] > key) right = (left + right) / 2;
				else if (arr[(left + right) / 2] < key) left = (left + right) / 2;
				else return (left + right) / 2;

				if (left == right - 1) return left;
			}

		}
	}
	else {
		if (key < arr[right]) return right;
		else if (key > arr[left]) return -1;
		else {
			while (left < right)
			{
				if (arr[(left + right) / 2] > key) 	left = (left + right) / 2;
				else if (arr[(left + right) / 2] < key) right = (left + right) / 2;
				else return (left + right) / 2;

				if (left == right - 1) return left;
			}
		}
	}
}

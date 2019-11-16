#include <stdio.h>

int main(void) {
	char str1[20], str2[20];
	gets_s(str1, sizeof(str1));
	gets_s(str2, sizeof(str2));
	int i;
	for (i = 0; str1[i] == str2[i]; i++);
	printf("%d", str1[i] - str2[i]);
}

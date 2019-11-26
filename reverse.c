#include <stdio.h>

int main(void) {
	int n;
	scanf_s("%d", &n);
	char whatthefuck[100];
	scanf_s("%s", whatthefuck, sizeof(whatthefuck));
	while (n > 0) putchar(whatthefuck[--n]);
	system("pause");
}

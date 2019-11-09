#include <stdio.h>
#include <ctype.h>

int main(void) {
	int c, a[4] = { 0 };
	while ((c = getchar()) != EOF) {
		if (isdigit(c)) a[1]++;
		else if (isalpha(c)) a[0]++;
		else if (isspace(c)) a[2]++;
		else a[3]++;
	}
	for (int i = 0; i < 4; i++) printf("%d\n", a[i]);
	system("pause");
}

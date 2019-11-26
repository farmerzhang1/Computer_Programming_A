#include <stdio.h>
int vowel(void) {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
			putchar(c);
		}
	}
	
}

#include <stdio.h>
#define IN 1
#define OUT 0

int main(void) {
	char str[100];
	gets_s(str, sizeof(str));
	char *current = str;
	int maxlen = 0;
	int currentlen = 0;
	int state = OUT;
	int place = 0;
	int allin = 1;
	while (*current) {
		if (*current >= 'A' && *current <= 'z'){
			if (state == OUT) {
				state = IN;
				currentlen = 1;
			}
			else {
				currentlen++;
			}
		}
		else if (state == IN)
		{
			state = OUT;
			allin = 0;
			if (currentlen > maxlen)
			{
				maxlen = currentlen;
				place = current - str - maxlen;
			}
		}
		else allin = 0;
		current++;
	}
	int i = 0;
	if (allin) maxlen = currentlen;
	while (i < maxlen) {
		putchar(str[place + i]);
		i++;
	}
	system("pause");
}

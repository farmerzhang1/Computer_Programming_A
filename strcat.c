#include <stdio.h>
#include <stdlib.h>

void strcat(char *destin, char *source);

int main(void) {
	char str1[50] = "why bug???";
	char *str2 = "help kids";
	
	strcat(str1, str2);
	puts(str1);
	system("pause");
}

void strcat(char *destin, char *source) {
	while (*destin) destin++;
	while (*destin++ = *source++);
	
}

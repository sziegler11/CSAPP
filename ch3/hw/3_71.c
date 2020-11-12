#include <stdio.h>

void good_echo() {
	printf("Enter a string; go on!\n");
	char c = getchar();
	while (c != '\n') {
		putchar(c);
		c = getchar();
	}
	puts("");
}

int main() {
	good_echo();
	return 0;
}
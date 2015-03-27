/* This C program demonstrates the switch statement without using breaks. */
/* The program is tested on MS Visual C++ platform                        */

#include <stdio.h>
#pragma warning(disable : 4996)

void main() {
	char ch;
	int f, a = 10, b = 20, i = 0;

	for (i = 0; i < 100; i++) {
		ch = getchar();

		if (ch == '+') {
			printf("ch = %c\n", ch);
			f = a + b;
			printf("f = %d\n", f);
		}
		if (ch == '-') {
			printf("ch = %c\n", ch);
			f = a - b;
			printf("f = %d\n", f);
		}
		if (ch == '*') {
			printf("ch = %c\n", ch);
			f = a * b;
			printf("f = %d\n", f);
		}
		if (ch == '/') {
			printf("ch = %c\n", ch);
			f = a / b;
			printf("f = %d\n", f);
		}
		if (ch == '%') {
			printf("ch = %c\n", ch);
			printf("invalid operator\n");
		}

	}
}
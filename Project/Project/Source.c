#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	printf("	# Program 1 #\n");
	char b;

	printf("Enter the char 'B': ");
	scanf("%c", &b);
	printf("You entered the char: %c\n", b);
	printf("Symbol code: %d\n\n", b);


	printf("	# Program 2 #\n");
	char s[100];
	int i;

	printf("Enter name and second name: ");
	while (getchar() != '\n') {} 
	fgets(s, 100, stdin);

	i = strlen(s);  //strlen считает часло символов, включая пробелы

	printf("My name: %s", s);
	printf("full name contains %d chars\n\n", i);


	printf("	# Program 3 #\n");
	int x, y;

	printf("Enter a positiv integer: ");
	scanf("%d", &x);
	printf("Enter a negative integer: ");
	scanf("%d", &y);

	printf("thirst 10 integer: %-4d\n", x);
	printf("second 10 integer: %-4d\n", y);
	printf("thirst 10 integer: %4d\n", x);
	printf("second 10 integer: %4d\n", y);

	printf("thirst 16 integer: %-8x\n", x);	//%x переводит число в шестнадцатеричную систему счисления
	printf("second 16 integer: %-8x\n", y);
	printf("thirst 16 integer: %8x\n", x);
	printf("second 16 integer: %8x\n\n", y);


	printf("	# Program 4 #\n");
	float k, t;

	printf("Enter a positive float: ");
	scanf("%f", &k);
	printf("Enter a negative float: ");
	scanf("%f", &t);

	printf("Thirst 10 float: %0.3f\n", k);
	printf("Second 10 float: %0.3f\n", t);

	printf("Thirst exp float: %e\n", k);
	printf("Second exp float: %e\n\n", t);


	printf("	# Program 5 #\n");
	unsigned int u;

	printf("Enter a positive integer: ");
	scanf("%u", &u);

	printf("10 positive integer: %u\n", u);
	printf("8 positive integer: %o\n", u);
	printf("16 positive integer: %x\n", u);

	return 0;
}

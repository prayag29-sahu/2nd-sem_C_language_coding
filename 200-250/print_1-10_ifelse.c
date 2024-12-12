#include <stdio.h>
#include <conio.h>
// to print digit into numbers
main()
{
	clrscr();
	int a;
	printf("enter any digit from 0-9:");
	scanf("%d", a);
	if (a == 0)
		printf("Zeor");
	else if (a == 1)
		printf("One");
	else if (a == 2)
		printf("two");
	else if (a == 3)
		printf("three");
	else if (a == 4)
		printf("four");
	else if (a == 5)
		printf("five");
	else if (a == 6)
		printf("six");
	else if (a == 7)
		printf("seven");
	else if (a == 8)
		printf("eight");
	else if (a == 9)
		printf("nine");
	else
		printf("invalid input");

	getch();
}
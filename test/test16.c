#include <stdio.h>
int main()
{
	char c;
	int a;
	scanf("%c %d", &c, &a);
	if (c == 'A')
	{
		printf("ºÚÌÒ");
	}
	else if (c == 'B')
	{
		printf("ºìÌÒ");
	}
	else if (c == 'C')
	{
		printf("Ã·»¨");
	}
	else(c == 'D')
	{
		printf("·½¿é");
	}

	// else if(a>=2 && a<=10)
	if (a >= 2 && a <= 10)
	{
		printf("%d", a);
	}
	else if (a == 1)
	{
		printf("A", a);
	}
	else if (a == 11)
	{
		printf("J");
	}
	else if (a == 12)
	{
		printf("Q");
	}
	else(a == 13)
	{
		printf("K");
	}
	return 0;
}
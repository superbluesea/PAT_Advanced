#include<stdio.h>
#include<stdlib.h>

int main()
{
	int A, B, C;
	scanf("%d%d", &A, &B);
	C = A + B;
	if (C < 0)
	{
		putchar('-');
		C = -C;
	}
	if (C>999999)
		printf("%d,%03d,%03d", C / 1000000, C / 1000 % 1000, C % 1000);
	else if (C > 999)
		printf("%d,%03d", C / 1000, C % 1000);
	else
		printf("%d", C);
	return 0;
}
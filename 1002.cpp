#include<stdio.h>
#include<string.h>

int main()
{
	int K1, K2, b[1001], count = 0;
	double a[1001];
	memset(a, 0, sizeof(double)* 1001);
	memset(b, 0, sizeof(int)* 1001);
	scanf("%d", &K1);
	for (int i = 0; i < K1; ++i)
	{
		int tmpIndex;
		double tmpValue;
		scanf("%d %lf", &tmpIndex, &tmpValue);
		a[tmpIndex] = tmpValue;
		b[tmpIndex] = 1;
	}
	scanf("%d", &K2);
	for (int i = 0; i < K2; ++i)
	{
		int tmpIndex;
		double tmpValue;
		scanf("%d %lf", &tmpIndex, &tmpValue);
		a[tmpIndex] += tmpValue;
		if (b[tmpIndex] == 0)b[tmpIndex] = 1;
		if (a[tmpIndex] == 0)b[tmpIndex] = 0;
	}
	for (int i = 0;i<=1000;++i)
		if (b[i] != 0)++count;
	printf("%d", count);
	for (int i = 1000; i >= 0; --i)
	{
		if (b[i] == 1)
			printf(" %d %.1lf", i, a[i]);
	}
	return 0;
}
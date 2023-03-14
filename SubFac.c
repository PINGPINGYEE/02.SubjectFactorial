#include <stdio.h>

int factorial_iter(int n)
{
	int res = 1;
	int i;
	for (i = n; i > 0; i--)
	{
		res = res * i;
	}
	return res;
}

#include <stdio.h>

int factorial_rec(int n)
{

	if (n <= 1)
	{
		return 1;
	}
	return n * factorial_rec(n - 1);
}

int main()
{

	int n = 30;
	long double result_iter = factorial_iter(n);
	long double result_rec = factorial_rec(n);
	printf("%.0lf\n", result_iter);
	printf("%.0lf\n", result_rec);
}


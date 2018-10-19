#include <stdio.h>
#include <stdlib.h>

long int re_F(int p);

int main(void)
{
	int m, n;
	long int ans, a, b, c;
	printf("求排列組合C(m,n)\n");
	printf("m=");
	scanf_s("%d", &m);
	printf("n=");
	scanf_s("%d", &n);

	a = re_F(m);
	b = re_F(n);
	c = re_F(m - n);

	ans = a / (b*c);
	printf("C(%d,%d)=%d\n", m, n, ans);

	system("pause");
}

long int re_F(int p)
{
	if (p > 1)
	{
		long int r = p * re_F(p - 1);
		return r;
	}
	else
	{
		return 1;
	}
}
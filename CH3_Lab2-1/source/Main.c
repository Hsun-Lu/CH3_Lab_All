#include <stdio.h>
#include <stdlib.h>

long int F(int p);

int main(void)
{
	int m, n;
	long int ans, a, b, c;
	printf("�D�ƦC�զXC(m,n)\n");
	printf("m=");
	scanf_s("%d", &m);
	printf("n=");
	scanf_s("%d", &n);

	a = F(m);
	b = F(n);
	c = F(m - n);

	ans = a / (b*c);
	printf("C(%d,%d)=%d\n", m, n, ans);

	system("pause");
}

long int F(int p)
{
	int count;
	long int result = 1;

	for (count = 1; count <= p; count++)
	{
		result = count * result;
	}
	return result;
}
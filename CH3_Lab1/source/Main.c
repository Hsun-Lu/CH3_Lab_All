#include <stdio.h>
#include <stdlib.h>

int Odd(int U);
int Even(int U);
int TotalSum(int U);


int main(void)
{
	int n, Sum;
	char AddChoice;
	printf("1+2+.....+n=?\n�п�Jn=");
	scanf_s("%d", &n);
	getchar();
	fflush(stdin);
	printf("�аݭn���_�ƩM(O)�A���ƩM(E)�A��ƩM(I)�H\n�п�ܡG");
	scanf_s("%c", &AddChoice);

	switch (AddChoice)
	{
		case 'O' :
			Sum = Odd(n);
			break;
		case 'E' :
			Sum = Even(n);
			break;
		case 'I' :
			Sum = TotalSum(n);
			break;
		default :
			printf("��J���~\n");
			return -1;
	}
	printf("�`�X��%d\n", Sum);
	system("pause");
	return 0;
}

int Odd(int U)
{
	int i, t = 0;
	for (i = 1; i <= U; i++)
	{
		if (i % 2 == 1)
		{
			t = t + i;
		}
	}
	return t;
}

int Even(int U)
{
	int i, t = 0;
	for (i = 1; i <= U; i++)
	{
		if (i % 2 == 0)
		{
			t = t + i;
		}
	}
	return t;
}

int TotalSum(int U)
{
	return Odd(U) + Even(U);
}
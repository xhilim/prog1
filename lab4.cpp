#include <iostream>
void zad1();
void zad2();
void zad3();
void zad3k();
int zad4(int n);
float zad5(int n);
float zad7(int n, int m);
int zad6(int n, int m);
int zad8(int n);
int potega(int x, int y);
int zad9(int n, int m);


int main()
{
//	zad1();
//	zad2();
//	zad3();
//	printf("%d",zad4(2));
//	printf("%f", zad5(-3));
//	printf("%d", zad6(4 , 5));
//	printf("%f", zad7(4, -2));
//	printf("%d", zad8(123));
		printf("%d", zad9(8,3));
}

void zad1()
{
	int n;
	scanf_s("%d", &n);
	if (n < 0)
		n = n * -1;

	printf(" zad1: %d", n);
}


void zad2()
{
	int n,x=1;
	scanf_s("%d", &n);
	if (n == 0)
	{
		printf("zad2: 1");
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		x *= i;
	}
	printf("zad2: %d",x);
}

int zad3k(int n)
{
	int x;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			x = i;
	}
	return x;
}
void zad3()
{
	int n, k;
	scanf_s("%d", &n);
	if(n>2)
	{ 
	
	k = zad3k(n);
	printf("%d", k);
	}
}

int zad4(int n)
{
	if (n > 0)
	{

		int x = 1;
		for (int i = 1; i <= n; i++)
		{
			x *= 2;
		}
		return x;
	}
	else if (n == 0)
		return 1;
}

float zad5(int n)
{
	float x = 1, y = 1;
	if (n > 0)
	{


		for (int i = 1; i <= n; i++)
		{
			x *= 2;
		}
		return x;
	}
	else if (n == 0)
		return 1;
	else
	{
		n = n * -1;
		for (int i = 1; i <= n; i++)
		{
			y *= 2;
		}
		x = 1 / y;
		return x;
	}
}

int zad6(int n, int m)
{
	if (m == 0)
		return 1;

	for (int i = 1; i < m; i++)
		n *= m;
	return  n;
}

float zad7(int n, int m)
{
	float x = 1, y = 1;
	if (m > 0)
	{


		for (int i = 1; i <= m; i++)
		{
			n *= n;
		}
		return x;
	}
	else if (m == 0)
		return 1;
	else
	{
		m = m * -1;
		for (int i = 1; i <= m; i++)
		{
			y *= n;
		}
		x = 1 / y;
		return x;
	}
}

int zad8(int n)
{
	int x = 0;
	if (n > 0)
	{
		
		while ((x + 1) * (x + 1) <= n) 
{
		x++;
	}
	return x;
	}

}

int pierwiastek(int n, int m);
{
	int a = 1., b = n;

	//dopóki nie otrzymamy ¿¹danej precyzji
	while (fabs(a - b) >= m)
	{
		a = (a + b) / 2.;
		b = n / a;
	}

	return (a + b) / 2.;
}
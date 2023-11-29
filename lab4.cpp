#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include<time.h>
void zad1();
void zad2();
void zad3();
void zad3k();
int zad4(int n);
float zad5(int n);
float zad7(int n, int m);
int zad6(int n, int m);
int zad8(int n);
double zad9(int m, int n);//chatgpt help
int relprime(int n, int m);//chatgpt help
void zad10(int n);///chatgpt help
void zad13(int n);////chatgpt help
void zad14(int n, int partition[], int length, int start, int repetitions);//skipp but chatgpt help
void zad15(int n, int m);//skipp
void zad16();//skipp
void zad17();
void zad18();
int zad19(int n);
int zad23(int n);
int zad24(int n);






int main() {

	srand(time(0));

	//int partition[100]; // Maksymalna d³ugoœæ rozk³adu 
	printf("%d", zad24(4));
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
	int x =0;
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
	

		int x = 1;
		for (int i = 1; i <= n; i++)
		{
			x *= 2;
		}
		return x;
	
	 if (n == 0)
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


double zad9(int m, int n) {
	// Sprawdzenie warunku m > 1
	if (m <= 1) {
		printf("m musi byæ wiêksze ni¿ 1\n");
		return -1.0;  // Zwrócenie wartoœci b³êdu
	}

	double epsilon = 0.00001;  // Dok³adnoœæ, mo¿na dostosowaæ
	double low = 0.0;
	double high = n;
	double guess = (low + high) / 2.0;

	// Metoda bisekcji
	while ((high - low) > epsilon) {
		double potega_guess = 1.0;
		for (int i = 0; i < m; ++i) {
			potega_guess *= guess;
		}

		double result = potega_guess - n;

		if (result > 0) {
			high = guess;
		}
		else {
			low = guess;
		}

		guess = (low + high) / 2.0;
	}

	return guess;
}

void zad10(int n)
{
	int x = 0;
	if (n > 0)
	{
		for (int i = 1; i < n; i++)
		{
			if (relprime(n, i) == 1)
				x += i;
			else
				continue;
		}
		printf("%d\n", x);
	}
}

//do 10
int relprime(int n, int m)
{
	int c=0;
	for (int i = 1; i <= n && i <= m; ++i)
	{
		if (n % i == 0 && m % i == 0)
			c = i;
	}
	if (c == 1)
		return 1;
	else
		return 0;
}

void zad11(int n, int m)
{
	int x = 0;
	for (int i = 0; i <= n; i++)
		x += zad8(i);

	printf("%d",x);
}


void zad12(int n, int m)
{
	int x = 0;
	for (int i = 0; i <= n; i++)
		x += zad9(m,i);

	printf("%d", x);
}



void zad13(int n) {


	for (int i = 1; i <= sqrt(n / 2); i++) {
		int square = n - i * i;
		int b = (int)sqrt(square);

		if (b * b == square && b >= i) {
			printf("%d^2 + %d^2\n", i, b);


			if (i != b) {
				printf("%d^2 + %d^2\n", b, i);
			}
		}
	}
}

void zad14(int n, int partition[], int length, int start, int repetitions) {
	if (n == 0) {
		printf("%d = ", partition[length - 1]);
		for (int i = 0; i < length - 1; i++) {
			printf("%d^2 + ", partition[i]);
		}
		printf("%d^2\n", partition[length - 1]);
		return;
	}

	int limit = repetitions ? n : sqrt(n);
	for (int i = start; i <= limit; i++) {
		partition[length] = i;
		zad14(n - i * i, partition, length + 1, repetitions ? i : i + 1, repetitions);
	}
}

void zad17()
{
	static unsigned int count =0;
	count += 1;
	printf("%d\n", count);
}

void zad18()
{
	static unsigned int lol = 0;
	static int stack = 0;
	lol += 1;
	if (lol == 1)
		stack = (rand() % 2);
	else
	{
		stack = 1 - stack;
	}
	printf("%d\n", stack);
}

int zad19( int n)
{
	static int suma = 0;



	suma += n;

	printf(" % d\n", suma);

	return n;
}

int zad20(int n)
{
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return n * zad20(n - 1);
	}
}

int zad21(int n)
{
	if (n == 0 ) {
		return 1;
	}
	else {
		return 5 + 2* zad21(n - 1);
	}
}

int zad22(int n)
{
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return zad22(n - 1) + ((2*zad22(n-2)) +3);
	}
}

int zad23(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1 || n==2)
	{
		return 1;
	}

	return zad23(n - 1) + zad23(n - 2);
}

int zad24(int n)
{
	int x = 0;
	if (n == 1 || n == 0)
	{
		return 1;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			x += zad24(i);
		}
	}
	return x;
}

int zad25(int n)
{
	if (n == 0 || n == 1) {
		return 1;
	}
	else if(n%2==0){
		return n + zad25(n - 1);
	}
	else
		return n * zad25(n - 1);
}

int zad26(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
		if (n % 2 == 0) {
			return zad26(n - 1) + zad26(n - 2);
		}
		else if (n % 2 == 1)
			return 5 * zad26(n - 1) + 4;
		else
			return zad26(n - 1);
}

int zad27(int n, int m)
{
	if (n == 0) {
		return m;
	}
	if (m == 0) {
		return n;
	}
	else
		return zad27(n - 1, m) + zad27(n, m - 1) + zad27(n - 1, m - 1);
}

int zad28 ( int n, int m )
{
	if ( m == 0 )
	{
		return n;
	}

	if ( n >= m )
	{
		return n - m + zad28( n - 1, m ) + zad28( n, m - 1 );
	}

	return zad28( m, n );

}

int zad29(int n, int m)
{
	if (n != m)
		return zad29(n > m ? n - m : n, m > n ? m - n : m);
	return n;
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
FILE* zad1(const char *x);
void zad2(FILE* x);
void zad3(const char* x);
void usun(char* s);
int zad4(const char* x, char c);
void zad5(const char* x);
int zad6(const char* x);
int zad7(const char* x, const char* y);
void zad8(const char* x, const char* y);
void zad10(const char* x, int tab[], int y);

int main()
{
	int tab[4] = { 6,9,3,7 };
	const char* z = "x.txt";
	const char* h = "y.txt";
	zad10(z,tab,4);
}
FILE* zad1(const char* x)
{
	FILE* f;
	errno_t Grzegorz_Braun = fopen_s(&f, x, "r");

	return f;
}

void zad2(FILE* x)
{
	const unsigned MAX_LENGTH = 256;
	char buffer[MAX_LENGTH];

	while (fgets(buffer, MAX_LENGTH, x))
		printf("%s", buffer);

	fclose(x);
}

void zad3(const char* x)
{

	FILE* f;
	errno_t Grzegorz_Braun = fopen_s(&f, x, "r");

	const unsigned MAX_LENGTH = 256;
	char buffer[MAX_LENGTH];

	while (fgets(buffer, MAX_LENGTH, f))
	{
		usun(buffer);
		printf("%s\n", buffer);
	}

	fclose(f);
}

void usun(char* s) {
	char* d = s;
	do {
		while (isspace((unsigned char)*d)) {
			++d;
		}
	} while (*s++ = *d++);
}

int zad4(const char* x, char c)
{
	FILE* f;
	char d;
	int aa = 0;
	errno_t Grzegorz_Braun = fopen_s(&f, x, "r");
	while (fscanf_s(f,"%c",&d)==1)
	{
		if (d == c)
			aa += 1;
	}
	fclose(f);
	return aa;
}



void zad5(const char* x)
{
	FILE* f;
	char d;
	errno_t Grzegorz_Braun = fopen_s(&f, x, "r");
	int count[256];
	for (int i = 0; i < 256; i++)
		count[i] = 0;
	while (fscanf_s(f, "%c", &d) == 1)
	{
		for (int i = 0; i < 256; i++)
		{
			if (d == (char)i)
				count[i] += 1;
		}
	}
	for (int i = 0; i < 256; i++)
		if (count[i] != 0)
			printf("%c: %d", (char)i, count[i]);

	fclose(f);
}

int zad6(const char* x)
{
	FILE* f;
	errno_t Grzegorz_Braun = fopen_s(&f, x, "r");
	int suma = 0,z=0;
	

	while (fscanf_s(f, "%d", &z) == 1)
	{
		suma += z;
	}
	printf("%d", suma);
	return suma;
}

int zad7(const char* x, const char* y)
{
	FILE* f,*g;
	char d,c;

	int aa = 0;
	errno_t Grzegorz_Braun = fopen_s(&f, x, "r");
	errno_t Marek_Suski = fopen_s(&g, y, "r");
	do {
		d = fgetc(f);
		c = fgetc(g);

		if (d != c) {
			fclose(f);
			fclose(g);
			return 0;
		}

	} while (d != EOF && c != EOF);
	fclose(f);
	fclose(g);
	return 1;
}

void zad8(const char* x, const char* y)
{
	FILE* f, * g;
	char d;

	int aa = 0;
	errno_t Grzegorz_Braun = fopen_s(&f, x, "r");
	errno_t Marek_Suski = fopen_s(&g, y, "w");
	while ((d = fgetc(f)) != EOF) {
		fputc(d, g);
	}
	fclose(f);
	fclose(g);
}

void zad9(const char* x, const char* y)
{
	FILE* f, * g;
	char d;

	int aa = 0;
	errno_t Grzegorz_Braun = fopen_s(&f, x, "r");
	errno_t Marek_Suski = fopen_s(&g, y, "a");
	while ((d = fgetc(f)) != EOF) {
		fputc(d, g);
	}
	fclose(f);
	fclose(g);
}

void zad10(const char* x, int tab[],int y)
{
	FILE* f;

	errno_t Grzegorz_Braun = fopen_s(&f, x, "w");
	for (int i = 0; i < y;i++) {
		fprintf(f, "%d", tab[i]);
	}
	fclose(f);
}


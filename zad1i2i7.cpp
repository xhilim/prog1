#include <stdio.h>

int main()
{
	unsigned int n, m, c;
	scanf_s("%u %u", &n, &m);
	//zad1
	printf("zad1: \n");
  
	c = n;
	while (c < m)
		{
		if (n == 0)
			break;
		printf("%d\n", c);
		c += n;
	
		}
	//zad2
	printf("zad2: \n");
	c = n;
	for (int i = 1; i <= m; i++)
	{
		if (n == 0)
			break;
		printf("%d\n", c);
		c += n;
	}

	//zad7
	c = 1;
	printf("zad7: \n");
	for (int i = n; i <= m; i++)
	{

		c *= i;
		
	}
	printf("%d\n", c);







}



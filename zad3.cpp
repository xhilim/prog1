

#include <stdio.h>

int main()
{
	int n, m, k, c;
	scanf_s("%u %u %u", &n, &m,&k);
	c = n;
	while (c < m && c > k)
	{
		printf("%u\n", c);
		c += n;
	}
}


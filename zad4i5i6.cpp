#include <stdio.h>


int main()
{
    int n;
    //zad4
    printf("zad4: \n");
    int x = 1;
    scanf_s("%d", &n);
    for (int i = n; i > 0; i--)
    {
        x = x * i;
      
    }
    printf("%d\n", x);
    //zad5
    printf("zad5: \n");
  
    x = 0;

    for (int i = 0; i <= n; i++)
    {
        int a = i * i;
        x += a;
    }
    printf("%d\n", x);

    //zad6
    printf("zad6: \n");
    if (n <= 2)
    {
        printf("NIE MOGE WYKONAC ZADANIA (N MUSI BYC > 2 :(");
    }
    else
    {
        x = 1;
        if (n % 2 == 0)
        {
            for (int i = 2; i <= n; i += 2)
            {
                x *= i;
            }
        }
        else
        {
            for (int i = 2; i <= (n-1); i += 2)
            {
                x *= i;
            }
        }
        printf("%d\n", x);
    }
}


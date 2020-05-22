#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, m = 0, flag=0, amount = 0;
    printf("Bir sayi giriniz:");
    scanf("%d", &n);

    while (amount < 10)
    {
        m = n / 2;
        for (i = 2; i <= m; i++)
        {
            if (n % i == 0)
            {

                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
        }

        if (flag == 0)
        {
            printf("%d\n", n);
            amount++;

        }
        n++;
    }
    return 0;
}
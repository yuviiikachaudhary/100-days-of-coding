#include <stdio.h>

int main()
{
    int n, rem, comp = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 10;

        if (rem == 0)
        {
            comp = comp + 1 * place;
        }
        else
        {
            comp = comp + 0 * place;
        }

        place = place * 10;
        n = n / 10;
    }

    printf("1's Complement = %d", comp);

    return 0;
}

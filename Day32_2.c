
#include <stdio.h>

int main()
{
    int num, digit, i;
    int count[10] = {0};
    int max = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num < 0)
    {
        num = -num;
    }

    if(num == 0)
    {
        count[0] = 1;
    }

    while(num > 0)
    {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    for(i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            result = i;
        }
    }

    printf("Most frequent digit = %d\n", result);
    printf("Frequency = %d", max);

    return 0;
}

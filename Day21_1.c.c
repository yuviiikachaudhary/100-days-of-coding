
#include <stdio.h>
#include <math.h>

int main()
{
    int num, first, last, temp, digits, divisor, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    digits = 0;
    temp = num;

    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    divisor = pow(10, digits - 1);

    first = num / divisor;

    result = last * divisor + (num % divisor);
    result = result - last;
    result = result - first * divisor;
    result = result + first;

    printf("Number after swapping = %d", result);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, r1, r2, real, imag;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0)
    {
        printf("It is not a quadratic equation");
    }
    else
    {
        d = b * b - 4 * a * c;

        if (d > 0)
        {
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);

            printf("Two distinct real roots\n");
            printf("Root 1 = %lf\n", r1);
            printf("Root 2 = %lf\n", r2);
        }
        else if (d == 0)
        {
            r1 = -b / (2 * a);

            printf("Two equal real roots\n");
            printf("Root = %lf", r1);
        }
        else
        {
            real = -b / (2 * a);
            imag = sqrt(-d) / (2 * fabs(a));

            printf("Two complex roots\n");
            printf("Root 1 = %lf + %lfi\n", real, imag);
            printf("Root 2 = %lf - %lfi", real, imag);
        }
    }

    return 0;
}

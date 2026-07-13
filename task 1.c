#include <stdio.h>

int main()
{
    float temp, c, f, k;
    char unit;

    printf("Enter temperature: ");
    scanf("%f", &temp);

    printf("Enter unit (C/F/K): ");
    scanf(" %c", &unit);

    if(unit == 'C' || unit == 'c')
    {
        f = (temp * 9 / 5) + 32;
        k = temp + 273.15;
        printf("Fahrenheit = %.2f\n", f);
        printf("Kelvin = %.2f\n", k);
    }
    else if(unit == 'F' || unit == 'f')
    {
        c = (temp - 32) * 5 / 9;
        k = c + 273.15;
        printf("Celsius = %.2f\n", c);
        printf("Kelvin = %.2f\n", k);
    }
    else if(unit == 'K' || unit == 'k')
    {
        c = temp - 273.15;
        f = (c * 9 / 5) + 32;
        printf("Celsius = %.2f\n", c);
        printf("Fahrenheit = %.2f\n", f);
    }
    else
    {
        printf("Invalid Unit");
    }

    return 0;
}

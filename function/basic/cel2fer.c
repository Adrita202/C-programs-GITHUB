#include <stdio.h>
int convert(int c)
{
    return ((c*9/5)+32);
}
int main()
{
    int celsius,fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%d",&celsius);

    fahrenheit=convert(celsius);
    printf("%dCelsius = %dFahrenheit",celsius,fahrenheit);
}

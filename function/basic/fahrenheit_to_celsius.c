#include <stdio.h>
int convert(int c)
{
    return ((c-32)*(5/9));
}
int main()
{
    int fahrenheit,celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%d",&fahrenheit);

    celsius=convert(celsius);
    printf("%dFahrenheit = %dcelsius",fahrenheit,celsius);
}

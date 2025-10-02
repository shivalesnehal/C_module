#include<stdio.h>
void main()
{
    float celsius = 32 , fahrenheit;
    
    fahrenheit = (celsius*9.0/5.0)+32.0;
    printf("%.2f celsius = %.2f fahrenheit\n", celsius, fahrenheit );
}
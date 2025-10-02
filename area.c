#include <stdio.h>
int main()
{
    float radius = 6.0;
	float PI = 3.14;  
    float area;

    area = PI * radius * radius;  

    printf("The area of a circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}

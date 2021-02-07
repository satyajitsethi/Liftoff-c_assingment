#include <stdio.h>
int main ()
{
    float r;
    double d,c,a;
    printf("Enter radius of circle:");
    scanf("%f", &r);
    d=2*r;
    printf("Diameter of circle = %.2f units \n",d);
    c=2*3.14*r;
    printf("Circumference of circle = %.2f units \n",c);
    a=3.14*(r*r);
    printf("Area of circle = %.2f sq.units ",a);
	return 0;

}



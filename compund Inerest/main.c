#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    double A,P,r,t ;
    printf("Enter the values for: Principal\t Rate\t time\n");
    scanf("%lf %lf %lf", &P,&r,&t);
    A = P*pow((1+r/100),t);
    printf(" Compounded loan or investment amount is equal to %f", A);
}

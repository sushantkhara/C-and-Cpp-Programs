#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,t,r;
    float si;
    printf("Enter Principal,Time and Rate of Interest to calculate Simple Interest!\n");
    scanf("%d %d %d", &p,&t,&r);
    si = (p*t*r)/100;
    printf("\nSimple Interest is = %.2f",si);
    return 0;
}

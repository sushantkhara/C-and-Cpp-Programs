#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter two values! \n");
    scanf("%d%d",&a,&b);
    c = (a>=b)? a: a+b;
    printf("The new value is %d", c);
    return 0;
}

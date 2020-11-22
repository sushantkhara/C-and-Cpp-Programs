#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter number!\n");
    scanf("%d",&a);
    if(a%2==0){
        printf(" even number %d \n",a);
    }
    printf("value of A is %d",a);
    getchar();
}

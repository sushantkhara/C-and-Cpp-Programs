#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n=2;
    printf("\n Even numbers between 1 to 100 are: \n");
    do{
       printf(" %d ",n);
       n = n+2;
    }
   while(n<=100);
      getchar();
      system("cls");
}

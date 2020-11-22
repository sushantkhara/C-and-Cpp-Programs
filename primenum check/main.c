#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,ans=0;
    printf("Enter a positive integer!\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        ans=n%i;
        if(ans==0){
            printf("Its not a prime number!");
            getchar();
            goto end;
            }
        }
        printf("Its a prime number!!");
            end:
    return 0;
}

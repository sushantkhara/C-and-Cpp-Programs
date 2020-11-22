#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, temp, rev=0, r;
    printf("Enter number !\n");
    scanf("%d",&n);
    temp = n;
    while(temp> 0){
        r = temp%10;
        rev =(rev*10)+r;
        temp =temp/10;
    }
    if(n==rev){
        printf("Entered number is a Palindrome!!\n");
    }
    else{
        printf("Entered number is not a Palindrome!!");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{   int age;
    printf("Enter your age: \n");
    scanf("%d",&age);
    if(age>=18){
        printf("You are eligible to vote!!\n");
    }
    else{
        printf("Sorry!! you are not eligible for voting...\n");
    }
    return 0;
}

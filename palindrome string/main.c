#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char one[10], two[10];
    int cmp;
    printf("Enter a String!\n");
    scanf("%s",one);
    strcpy(two,one);
    strrev(one);
    cmp = strcmp(one,two);
    if(cmp==0){
        printf("String is a Palindrome!");
    }
    else{
        printf("String is not a Palindrome!");
    }
    getchar();
}

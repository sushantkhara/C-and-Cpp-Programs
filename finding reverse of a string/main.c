#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char str[10];
    int i,len;
    printf("Enter a string!\n");
    scanf("%s", str);
    len=strlen(str);
    printf("%d\n", len);
    printf("The reversed string is:\n\n");
    for(i=len-1; i>=0; i--){
        printf("%c",str[i]);
    }
    getchar();
}

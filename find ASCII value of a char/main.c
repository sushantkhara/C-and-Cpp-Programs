#include <stdio.h>
#include <stdlib.h>

int main()
{    char ch ;
    clrscr() ;
    printf("ASCII chart for characters : \n\n") ;
    for(ch = 65 ; ch <= 122 ; ch++)
    {
        if(ch > 90 && ch < 97)
        continue ;
        printf("%c \t %3d \t", ch, ch) ;
    }
    getch() ;
    /*char ch;
    printf("Enter a character!\n");
    scanf("%c",&ch);
    printf("The ASCII value of %c is %d",ch,ch);
    getchar();*/
    /*
    #include<iostream>
{
char c;
cout << "Enter a character : ";
cin >> c;
cout << "ASCII value of " << c <<" is : " << (int)c;
return 0;
}*/
}

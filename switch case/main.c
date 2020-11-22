#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char ch;
    printf("Enter a character!\n");
    scanf(" %c ", &ch);

switch(ch){
                    case 'a':
                    case 'e':
                    case 'i':
                    case '0':
                    case 'u':
                        printf(" %c is a vowel.",ch);
                            break;
                    default: printf("\n Invalid choice!! Try again..");
            }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;
    printf("Hi!! what's your hobby?!\n \nEnter your choice!! ");
    printf("\n\t [1]Singing");
    printf("\n\t [2]Dancing");
    printf("\n\t [3]Playing Musical Instruments");
    printf("\n\t [4]Playing Games\n");
    scanf("%d",&ch);
    if(ch==1){
        printf("Singing is your hobby");
    }
    else if(ch==2){
        printf("Dancing is your hobby");
    }
    else if(ch==3){
        printf("Playing Musicals is your hobby");
    }
    else if(ch==4){
        printf("Playing Games is your hobby");
    }
    else{
        printf("Invalid Choice! Please try again...");
    }
    getchar();
}

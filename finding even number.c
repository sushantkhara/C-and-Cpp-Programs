#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("the even numbers are=");
    
    for(a=0; a<=100; a++){
    if(a%2==0){
    printf("%d",a);
    printf("\n");
    }
}
    getchar();
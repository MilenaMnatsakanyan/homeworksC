#include <stdio.h>
int main(){
    int age = 0;
    printf("Enter the number : ");
    scanf("%d" , &age);
    if(age > 18){
        printf("You are already an adult");
        
    } else {
        printf("You are not an adult");
    }
    return 0;
    }

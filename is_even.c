#include <stdio.h>
int main(){

    int number = 0;
    printf("Enter the number : ");
    scanf("%d" , &number);
    if(number%2==0){
printf("Your number is even ");
}
else {
    printf("Your number is odd");
}

    return 0;
}

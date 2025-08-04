#include <stdio.h>
int main(){

    int number = 0;
    int is_even;
    printf("Enter the number : ");
    scanf("%d" , &number);
    if(number%2 == 0){
is_even = 0;
printf("Your number is even ");
}
else {
    printf("the number is odd  ");
}
    return 0;
}


#include <stdio.h>

int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if(num%2==0 || num%3==0 || num%9==0 || num%5==0  || num%7==0 )
    {
        printf("its not prime ");
    }
    else{
        printf("number is prime ");
    }
    return 0;
}

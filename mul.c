#include <stdio.h>
int mul(int num){
    if(num < 10){
        return num;
    }
    return (num % 10) * mul(num / 10);
    }
    int main() {
        int num;
        printf("Enter the number : ");
        scanf("%d", &num);
        printf("%d", mul(num));
        return 0;
    }

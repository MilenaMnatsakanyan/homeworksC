#include <stdio.h>

int main()
{
    int num = 0;
    int sum = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    while(num > 0){
    sum += num % 10;
    num = num / 10;
    }
    printf("%d", sum);
    return 0;
}

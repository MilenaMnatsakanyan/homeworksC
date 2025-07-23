
#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    printf("Enter the endpoints :");
    scanf("%d %d" , &a, &b);
    int sum = 0;
    for(int i = a;  i <= b; i++){
        if(i%2 == 0){
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}

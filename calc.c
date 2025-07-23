#include <stdio.h>

int main() {
    int num = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++) {
        int x = num * i;
        printf("%d ", x);
    }

    return 0;
}

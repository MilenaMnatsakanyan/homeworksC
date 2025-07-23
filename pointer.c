#include <stdio.h>
int main() {
    int x = 0;
    int y = 0;
    int result = 1;
    printf("Enter the numbers :");
    scanf("%d %d", &x, &y );
    for(int i = 1; i <= y; i++  ){
    result = result * x ;
    
}
printf("%d",result );
return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
    int num = 0;
    int n = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    int currentnum = num;
    while(currentnum > 0){
       currentnum = currentnum /10;
        n ++;
        
    }printf("%d\n", n);
    int newnum = num;
    int index = n-1;
    int reversed = 0;
    while(newnum > 0){
        int x = newnum % 10;
        int y = x * pow(10,index);

        reversed += y;
        newnum = newnum / 10;
        index--;
        
        
        
    }
    printf("%d" , reversed);
    return 0;
}

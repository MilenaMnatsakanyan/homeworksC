#include <stdio.h>
int main (){
int number = 0;
int rev = 0;
printf("Enter the number : ");
scanf("%d", &number);
while(number > 0){
rev = rev * 10 + number % 10;
number /= 10;
}
printf("%d", rev);
return 0;
}

#include stdio.h>
int main (){
int number = 0;
int rev = 0;
int original = 0;
printf("Enter the number : ");
scanf("%d", &number);
original = number;
while(number > 0){
rev = rev * 10 + number % 10;
number /= 10;
}
printf("%d\n", rev);
if(rev == original){
    printf("number is polindrome :");
}
else{
printf("number is not polindrome :");
}
return 0;
}

#include <stdio.h>
int main(){
  int number = 0;
  int is_positive_and_even;
  printf("Enter the number :");
  scanf("%d" , &number);
  if(number > 0 && number%2==0){
   is_positive_and_even = number;
  printf("is positive and even :");
  }
  else{

    printf("is not positive and even :");
  }
  return 0;

}

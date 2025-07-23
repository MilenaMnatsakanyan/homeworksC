#include <stdio.h>

int main() {
    int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	printf("Enter the first number :");
	scanf("%d" , &num1);
	printf("Enter the second number : ");
	scanf("%d", &num2);
	printf("Enter the third number : ");
	scanf("%d", &num3);
	if(num1 > num2 && num1 > num3){
	printf("num1 is the greatest ");
	}
	else if(num2 > num1 && num2 > num3){
	printf("num2 is the greatest ");
	}
	else if(num3 > num1 && num3 > num2){
	printf("num3 is the greatest ");
	}
	return 0;
	}


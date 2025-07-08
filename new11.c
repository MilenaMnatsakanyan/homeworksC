#include <stdio.h>
	int main () {
	float  celsius = 0;
	printf("Enter celsius : ");
	scanf("%f" , &celsius);
	float fahrenheit = (celsius*9/5) + 32;
	printf("%f" , fahrenheit);
return 0;
}


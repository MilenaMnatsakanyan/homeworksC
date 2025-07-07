#include <stdio.h>
	int main () {
	float x = 0;
	float y = 0;
	printf("Enter the float values : " );
 	scanf("%f %f" , &x, &y);
	float a  = (x * y + 21 * x / y - 200 );	
	printf("%f" , a);
return 0;
}

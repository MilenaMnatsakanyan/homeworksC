/*#include <stdio.h>
	int main () {
	char letter  = 0;
	printf("Enter the upper  letter : ");
	scanf("%c" , &letter);
	int lowercase = letter +  32;
	printf("%c" , lowercase);
	return 0;
}

#include <stdio.h>
int main ()  {
char letter = 0;
printf("Enter the lower letter : ");
scanf("%c" , &letter);
int uppercase = letter - 32;
printf("%c" , uppercase);
return 0;
}
*/

#include <stdio.h>

int main() {
char letter = 0;

printf("Enter any letter\n");
scanf("%c", &letter);
printf("%c", letter ^32);
return 0;
}	

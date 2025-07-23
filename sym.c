#include <stdio.h>
int main() {
char sym = 0;
printf("Enter the symbol :");
scanf("%c" , &sym);
	if('0' <= sym && sym <= '9'){
	printf("true");
	}
	else{
		printf("false");
}
return 0;
	}

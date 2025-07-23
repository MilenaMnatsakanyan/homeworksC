#include <stdio.h>
int main(){
	char sym = 0;
	printf("Enter the uppercase :");
	scanf("%c", &sym);
	if( 'A' < sym < 'Z'){
	sym += 32;
}
	printf("%c" , sym);
	return 0;

}

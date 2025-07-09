#include <stdio.h>
int main () {
	int a;
	printf("enter the number : ");
	scanf("%d" , &a);
	int ibit;
	int jbit;
	int i;
	int j;
	printf("Enter the indexes : ");
	scanf("%d %d" , &i , &j);
	ibit = (a>>i) & 1;
	jbit = (a>>j) & 1;
	if(ibit != jbit){
		int mask = (1 << i) | (1 << j);
		a = a ^ mask;
		printf("%d" , a);
	}	
return 0;
}




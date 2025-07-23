#include <stdio.h>
int main() {
int score = 0;
int passed = 0;
	printf("Enter your exam score 0-100 : ");
	scanf("%d" , &score);
	passed = (score > 50);

    if(passed == 0){
	    printf("you didnt pass your exam");
    } else{
		printf("you passed the exam :");
      }

    return 0;
}

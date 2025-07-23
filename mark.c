#include <stdio.h>

int main() {
  int mark = 0;
  printf("Enter your mark: ");
  scanf("%d", &mark);

    if (mark >= 90 && mark <= 100) {
        printf("class A");
    } else if (mark >= 80 && mark <= 89) {
        printf("class B");
    } else if (mark >= 70 && mark <= 79) {
        printf("class C");
    } else if (mark >= 60 && mark <= 69) {
        printf("class D");
    } else if (mark < 60 && mark >= 0) {
        printf("class E");
    } 

    return 0;
}

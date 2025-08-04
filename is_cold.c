#include <stdio.h>
int main(){
    float temperature = 0;
    float is_cold;
    printf("Enter the temperature in Celsius :");
    scanf("%f" , &temperature);
    if(temperature < 15){
        is_cold = temperature;
        printf("it is cold : ");
    }
    return 0;
}

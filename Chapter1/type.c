#include <stdio.h>

int main(void){

    int height, length, width, volume;
    float profit, loss;

    height = 8 ;
    length = 12 ;
    width = 10 ;

    profit = 2150.0f;

    volume = height * length * width;
    printf("Height: %d\n" , height);
    printf("Profit: $%f\n" , profit); // de base 6 chiffres apres la virgule
    printf("Profit: $%.2f\n", profit); // 2 chiffre apres la virgule
    printf("Height: %d Length: %d\n", height,length);
}
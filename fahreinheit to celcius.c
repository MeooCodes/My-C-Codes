
#include<stdio.h>

int main () {

    float cel , far ;

    printf("Enter your temp as fahrenheit = ");

    scanf("%f" ,&far);

    cel = (far - 32) * 5/9 ;
    printf("%.2f fahrenheit = %.2f celcius",far,cel);



    return 0 ;
}



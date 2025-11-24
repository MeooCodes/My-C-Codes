#include <stdio.h>

int main () {


    float base, height,area ;

    printf("Enter Your Base =");
    scanf("%f",& base);

    printf("Enter Your Height =");
    scanf("%f",& height);

    area = 0.5 * base * height ;
    printf("Area of Triangle = %.2f\n",area);



    return 0;
}

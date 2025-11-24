#include <stdio.h>

int main () {

    float length, width , area ;

    printf("Enter your length of rectangle = ");
    scanf("%f" , & length);

    printf("Enter your width of rectangle = ");
    scanf("%f" , & width);

    area = length * width ;
    printf("The area of rectangle is =%.2f\n",area);




    return 0 ;
}

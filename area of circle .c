
/*
#include<stdio.h>
#define PI 3.14159   //using #define

int main () {

    float radius , area ;

    printf("Enter your radius = ");
    scanf("%f" ,&radius);

    area = PI * radius * radius ;
    printf("The area of circle is =%.2f\n ",area);




    return 0;
}

*/


#include<stdio.h>
#include <math.h>  //using math.h is a library function

int main () {

    float radius , area ;

    printf("Enter your radius = ");
    scanf("%f" ,&radius);

    area = M_PI * radius * radius ;
    printf("The area of circle is =%.2f\n ",area);

    return 0 ;

}




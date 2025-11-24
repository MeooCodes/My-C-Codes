#include<stdio.h>

int main () {


    int A , B , C ;
    int sum ;
    float avg ;

    printf("Enter your number 1 = ");
    scanf("%d", &A);

    printf("Enter your number 2 = ");
    scanf("%d", &B);

    printf("Enter your number 3 = ");
    scanf("%d", &C);

    sum = A + B + C ;
    printf("The sum of the number is =%d\n", sum);

    avg = sum / 3.0 ;
    printf("The avg of the number is = % .2f\n", avg);


    return 0;
}


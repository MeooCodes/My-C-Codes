#include <stdio.h>

int main () {

    int num ;

    printf("Enter your number = ");
    scanf("%d" ,&num);

    if (num > 0)
    {
        printf("This is a positive number");
    }
    else if(num < 0)
    {
        printf("This is a negative number");
    }

    else
    {
        printf("Number is zero");
    }


    return 0;
}

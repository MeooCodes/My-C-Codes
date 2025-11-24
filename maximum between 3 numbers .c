#include<stdio.h>

int main (){

    int num1, num2, num3 ;

    printf("Enter 1st number = ");
    scanf("%d",&num1);

    printf("Enter 2nd number = ");
    scanf("%d",&num2);

    printf("Enter 3rd number = ");
    scanf("%d",&num3);

    if (num1>num2){

    printf("%d is the maximum number",num1);
    }
    else if (num1>num3){
    printf("%d is the maximum number",num2);
    }
    else {

    printf("%d is the maximum number",num3);
    }


return 0;
}

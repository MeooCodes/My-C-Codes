#include<stdio.h>


int main () {



    float phy,chem,math,bio,comp ,sum,avg,percenatge ;

    printf("Enter your number in phy =");
    scanf("%f",&phy);

    printf("Enter your number in chem =");
    scanf("%f",&chem);

    printf("Enter your number in math =");
    scanf("%f",&math);

    printf("Enter your number in bio =");
    scanf("%f",&bio);

    printf("Enter your number in comp =");
    scanf("%f",&comp);

    sum = phy + chem + math + bio + comp;
    printf("%.2f is your total number\n",sum);

    avg = sum / 5;
    printf("%.2f is your average number\n",avg);

    percenatge = (sum/500)*100 ;
    printf("%.2f percentage\n",avg);


    if (avg>=80){
        printf("Your grade is A");
    }
    else if (avg>=75)
    {
        printf("Your grade is B");
    }
    else if (avg>=60)
    {
        printf("Your grade is C");
    }
    else if (avg>=40)
    {
        printf("Your grade is D");
    }
    else
    {
        printf("Your are fail !!");
    }












    return 0;
}

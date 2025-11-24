#include<stdio.h>
#include<ctype.h>

int main(){


    char upper_case;
    printf("Enter your upper case =");
    scanf("%c" ,&upper_case);

    char lower_case = tolower(upper_case);
    printf("lowercase value is =%c\n",lower_case);


    return 0;
}




/*
#include <stdio.h>

int main (){

    char c;
    int lowercase_vowel ,uppercase_vowel;

    printf("Enter your character = ");
    scanf("%c",&c);

    lowercase_vowel = (c == 'a'|| c == 'e'|| c == 'i'|| c == 'o'||c == 'u'); // for string we must use '' nor "" //

    uppercase_vowel = (c == 'A'|| c == 'E'|| c == 'I'|| c == 'O'||c == 'U');

    if (lowercase_vowel || uppercase_vowel)
    {
        printf("%c is Vowel",c);

    }
    else

        printf("%c is consonant",c);

    return 0;
}
*/


#include<stdio.h>

int main (){

    char c;

    printf("Enter Your value =");
    scanf("%c",&c);

    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||

        c=='A' || c=='E' || c=='I' || c=='O' || c=='U'
         )
    {
        printf("%c is vowel",c);
    }
    else
    {
        printf("%c is consonant",c);
    }

    return 0;
}





#include<stdio.h>
#include<ctype.h>
main ()
{
    char ch ;
    printf("Enter any alphabet : ") ;
    scanf("%c" , &ch) ;

    if ( ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch == 85 )
        printf("%c is a vowel" , tolower(ch)) ;
    else if ( ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117 )
        printf("%c is a vowel" , toupper(ch)) ;
    else
        printf("%c is a consonant" , ch) ;
    printf("\n") ;
    return 0 ;
}

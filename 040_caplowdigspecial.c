#include<stdio.h>
#include<ctype.h>
main()
{
    char ch ;
    printf("Enter a character : ") ;
    scanf("%c" , &ch) ;

    if ( isupper(ch) )
        printf("It is a Capital letter.\n") ;
    else if ( islower(ch) )
        printf("It is a lower-case letter.\n") ;
    else if ( isdigit(ch) )
        printf("It is a digit.\n") ;
    else
        printf("It is a special character.\n") ;
    printf("\n") ;
    return 0 ;
}

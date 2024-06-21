#include<stdio.h>
main ()
{
    char ch ;
    printf("Enter any character : ") ;
    scanf("%c" , &ch) ;

    if ( ch >= 65 && ch <= 90 )
        printf("%c is an upper case letter" , ch) ;
    else if ( ch >= 97 && ch <=122 )
        printf("%c is a lower case letter" , ch) ;
    else if ( ch >= 48 && ch <=57 )
        printf("%c is a digit" , ch) ;
    else
        printf("%c is a special character" , ch) ;
    printf("\n") ;
    return 0 ;
}

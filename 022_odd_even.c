#include<stdio.h>
int main ()
{
    int num ;
    printf("Enter any integer : ") ;
    scanf("%d" , &num) ;

    if ( num % 2 == 0 )
        printf("%d is an even number" , num ) ;
    else
        printf("%d is an odd number" , num ) ;
    printf("\n") ;
    getch() ;
    return 0 ;
}

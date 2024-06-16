#include<stdio.h>
main()
{
    int Floors ;
    printf("Enter your floor number : ") ;
    scanf("%d" , &Floors ) ;

    if ( Floors > 50 )
         printf("We have only have \"50 floors\" ") ;
    else if ( Floors % 2 == 0 )
        printf("Heyy you have \"Beach view\" for your flat ") ;
    else
        printf("Heyy you have \"Forest view\" for your flat ") ;
    printf("\n") ;
    return 0 ;
}

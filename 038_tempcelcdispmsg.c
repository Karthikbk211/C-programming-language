#include<stdio.h>
main ()
{
    int temp ;
    printf("Enter the temperature of any area : ") ;
    scanf("%d" , &temp) ;

    if( temp < 0 )
        printf("Freezing Weather") ;
    else if ( temp >=0 && temp < 10 )
        printf("Very Cold Weather") ;
    else if ( temp >=10 && temp < 20 )
        printf("Cold Weather") ;
    else if ( temp >=20 && temp < 30 )
        printf("Normal Weather") ;
    else if ( temp >=30 && temp < 40 )
        printf("Its Hot") ;
    else
        printf("Its Very Hot") ;
    printf("\n") ;
    return 0 ;
}

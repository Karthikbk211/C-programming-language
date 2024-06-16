#include<stdio.h>
int main ()
{
    int Samsung_mob , Vivo_mob ;
    printf("Enter the price of the Samsung mobile : ") ;
    scanf("%d" , &Samsung_mob) ;

    printf("Enter the price of the Vivo mobile : ") ;
    scanf("%d" , &Vivo_mob) ;

    if ( Samsung_mob > Vivo_mob)
        printf("Samsung is more expensive than Vivo.\n") ;

    else if ( Vivo_mob > Samsung_mob )
        printf("Vivo is more expensive than Samsung.\n") ;

    else
        printf("Both are of same cost.\n") ;
    printf("\n") ;
    return 0 ;

}

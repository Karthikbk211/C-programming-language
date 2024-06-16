#include<stdio.h>
int main()
{
    int rey , mont , park ;
    printf("Enter the price of the Reynolds pen : ") ;
    scanf("%d" , &rey) ;

    printf("Enter the price of the Montex pen : ") ;
    scanf("%d" , &mont) ;

    printf("Enter the price of the Parker pen : ") ;
    scanf("%d" , &park) ;

    if ( rey > mont && rey > park )
        printf("\nReynolds is the costliest of the three") ;
    else if ( mont > park )
        printf("\nMontex is the costliest of the three") ;
    else
        printf("\nParker is the costliest of the three") ;
    printf("\n") ;
    return 0 ;
}

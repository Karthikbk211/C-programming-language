#include<stdio.h>
int main()
{
    int basic , allow , ded , exp , gro , net ;
    float bon ;
    printf("Enter the basic salary : ") ;
    scanf("%d" , &basic) ;

    printf("Enter the allowance amount : ") ;
    scanf("%d" , &allow) ;

    printf("Enter the deduction amount : ") ;
    scanf("%d" , &ded) ;

    printf("Enter the years of experience : ") ;
    scanf("%d" , &exp) ;

    gro = basic + allow ;
    net = gro - ded ;

    if ( basic <= 0 || allow <= 0 || ded <=0 ) {
        printf("\aInvalid input") ;
    return 0 ; }

    else if ( exp >= 5 )
        bon = 3*net/12 ;
    else if ( exp >= 3 && exp < 5 )
        bon = 2*net/12 ;
    else if ( exp == 0 || exp < 0 )
        printf("\nYou have no work experience.\nTo get bonus you must have at least 3 years of experience\n") ;
    else
        bon = net/12 ;
    printf("\nThe gross salary is %d" , gro) ;
    printf("\nThe net salary is %d" , net) ;
    printf("\nThe bonus salary is %.2f\n" , bon) ;
    printf("\n") ;
    return 0 ;
}

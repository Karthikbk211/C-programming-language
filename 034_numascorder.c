#include<stdio.h>
main ()
{
    float num1 , num2 , num3 ;
    num1=num2=num3=0 ;
    printf("Enter any value for the first number which is not equal to the second or third : ") ;
    scanf("%f" , &num1) ;

    printf("Enter any value forthe second number which is not equal to the first or the third number : ") ;
    scanf("%f" , &num2) ;

    printf("Enter any value for  : ") ;
    scanf("%f" , &num3) ;

    if ( num1 > num2 && num1 > num3 && num2 > num3 )
        printf("%.2f < %.2f < %.2f\n" , num3 , num2 , num1) ;
    else if ( num1 > num2 && num1 > num3 && num3 > num2 )
        printf("%.2f < %.2f < %.2f\n" , num2 , num3 , num1 ) ;
    else if ( num2 > num3 && num3 > num1)
        printf("%.2f < %.2f < %.2f\n" , num1 , num3 , num2) ;
    else if ( num2 > num3 && num1 > num3 )
        printf("%.2f < %.2f < %.2f\n" , num3 , num1 , num2) ;
    else if ( num3 > num2 && num2 > num1 )
        printf("%.2f < %.2f < %.2f\n" , num1 , num2 , num3) ;
    else printf("%.2f < %.2f < %.2f\n" , num2 , num1 , num3) ;
    printf("\n") ;
    return 0 ;
}

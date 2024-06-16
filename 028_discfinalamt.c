#include<stdio.h>
int main()
{
    int Sales , Discount , Final_amt ;
    printf("Enter the sales amount in Rs : ") ;
    scanf("%d" , &Sales) ;

    if ( Sales >= 25000 )
        Discount = Sales*10/100 ;
    else
        Discount = Sales*5/100 ;
    Final_amt = Sales - Discount ;

    printf("The discount amount in Rs is %d " , Discount) ;
    printf("\nThe final amount to be paid in Rs is %d " , Final_amt) ;
    printf("\n") ;
    return 0 ;


}


#include<stdio.h>
int main ()
{
    int bill_amt , paid_amt , balance ;

    printf("Enter Total bill amount in Rs : ") ;
    scanf("%d",&bill_amt) ;

    printf("Enter Paid amount by the customer in Rs : ") ;
    scanf("%d",&paid_amt) ;

    balance = paid_amt - bill_amt ;
    printf("Enter the Balance is ..: Rs %d" , balance) ;
    printf("\n") ;
    return 0 ;

}

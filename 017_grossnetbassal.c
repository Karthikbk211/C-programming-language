#include<stdio.h>
int main()
{
    int Gross , Net , Basic , Allow , Deduc ;
    printf("Enter The Basic Salary ..: " ) ;
    scanf("%d" , &Basic) ;

    printf("Enter The Allowance Amt ..:") ;
    scanf("%d" , &Allow) ;

    printf("Enter The Deduction Amt ..:") ;
    scanf("%d" , &Deduc) ;

    Gross = Basic + Allow ;
    Net = Gross - Deduc ;

    printf("The Gross Salary is : %d \nThe Net Salary is %d" , Gross , Net ) ;
    return 0 ;
}

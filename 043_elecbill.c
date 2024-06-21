#include<stdio.h>
main()
{
    int cid , units ;
    float elecbill , surchg , cgp , netamt ;
    char cname[20] ;
    printf("Input Customer Id : ") ;
    scanf("%d" , &cid) ;

    printf("Input Customer Name : ") ;
    scanf("%s" , &cname) ;

    printf("Input Units Consumed : ") ;
    scanf("%d" , &units) ;

    if ( units < 200 )
        cgp = 1.20 ;
    else if ( units >= 200 && units < 400 )
        cgp = 1.50 ;
    else if ( units >= 400 && units < 600 )
        cgp = 1.80 ;
    else
        cgp = 2.00 ;

    elecbill = cgp * units ;

    if ( elecbill > 400 )
        surchg = elecbill * 15.00/100.00 ;

    netamt = elecbill + surchg ;

    if ( netamt < 100 )
        printf("\nOops , bill doesn't satisfy the required conditions") ;
    else {
        printf("\nCustomer IDNO : %d.\n" , cid) ;
        printf("Customer Name : %s.\n" , cname) ;
        printf("Units Consumed : %d.\n" , units) ;
        printf("\nAmount Charge @Rs.%.2f per unit : %.2f\n" , cgp , elecbill ) ;
        printf("Surcharge Amount : %.2f\n" , surchg) ;
        printf("\nNet Amount Paid by the customer : %.2f\n" , netamt) ; }
    printf("\n") ;
    return 0 ;
}

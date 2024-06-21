#include<stdio.h>
int main()
{
    char sub1[20] , sub2[20] , sub3[20] ;
    float acttotal ;
    float mk1 , mk2 , mk3 , totalreceiv , avg ;
    printf("Input the first subject\'\s name : ") ;
    scanf("%s" , &sub1) ;

    printf("\nInput the second subject\'\s name : ") ;
    scanf("%s" , &sub2) ;

    printf("\nInput the third subject\'\s name : ") ;
    scanf("%s" , &sub3) ;

    printf("\nEnter the first subject\'\s marks : ") ;
    scanf("%f" , &mk1) ;

    printf("\nEnter the second subject\'\s marks : ") ;
    scanf("%f" , &mk2);

    printf("\nEnter the third subject\'\s marks : ") ;
    scanf("%f" , &mk3) ;

    acttotal = 100.00 ;
    totalreceiv = 100*( mk1 + mk2 + mk3 )/acttotal ;
    acttotal > totalreceiv ;
    avg = totalreceiv/3 ;
    if ( avg > 90 )
        printf("\nThe grade you have received is A+ . Your percentage is %.2f , Excellent " , avg) ;
    else if ( avg > 80.00 && avg <=90.00 )
        printf("\nThe grade you have received is A . Your percentage is %.2f , Great " , avg) ;
    else if ( avg > 70.00 && avg <= 80.00 )
        printf("\nThe grade you have received is B+ . Your percentage is %.2f , Good work " , avg) ;
    else if ( avg > 60.00 && avg <= 70.00 )
        printf("\nThe grade you have received is B . Your percentage is %.2f , Can do better " , avg) ;
    else if ( avg >= 50.00 && avg <= 60.00 )
        printf("\nThe grade you have received is C . Your percentage is %.2f , Close call , need to improve a lot " , avg) ;
    else
        printf("\nThe grade you have received is F . Your percentage is %.2f , Unfortunately you have failed " , avg) ;
    printf("\n") ;
    return 0 ;
}

#include<stdio.h>
int main()
{
    int no1 , no2 , no3 , no4 ;
    printf("Enter the value of first number : ") ;
    scanf("%d" , &no1) ;

    printf("Enter the value of second number : ") ;
    scanf("%d" , &no2) ;

    printf("Enter the value of third number : ") ;
    scanf("%d" , &no3) ;

    printf("Enter the value of fourth number : ") ;
    scanf("%d" , &no4) ;

    if ( no1 > no2 && no1 > no3 && no1 > no4 )
        printf("%d is the biggest of the four numbers" , no1) ;
    else if ( no2 > no3 && no2 > no4 )
        printf("%d is the biggest of the four numbers" , no2) ;
    else if ( no3 > no4 )
        printf("%d is the biggest of the four numbers" , no3) ;
    else
        printf("%d is the biggest of the four numbers" , no4) ;
    return 0 ;


}

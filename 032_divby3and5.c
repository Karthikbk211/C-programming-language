#include<stdio.h>
int main()
{
    int num ;
    printf("Enter any value : ") ;
    scanf("%d" , &num) ;

    if ( num % 3 == 0 && num % 5 == 0 )
        printf("The number is divisible by both 3 and 5") ;
    else
        printf("The number is not divisible by both 3 and 5") ;
    printf("\n") ;
    return 0 ;

}






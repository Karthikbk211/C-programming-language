#include<stdio.h>
#include<stdlib.h>
main()
{
    int num1 , num2 , absdiff ;
    printf("Enter any value for the first number : ") ;
    scanf("%d" , &num1) ;

    printf("Enter any value for the second number : ") ;
    scanf("%d" , &num2) ;

    absdiff = abs(num1 - num2) ;
    printf("The absolute difference of %d and %d is %d\n" , num1 , num2 , absdiff) ;
    printf("\n") ;
    return 0 ;
}

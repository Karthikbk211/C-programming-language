#include<stdio.h>
int main()
{
    int year ;
    printf("Enter the year in which you were born : ") ;
    scanf("%d" , &year) ;

    if ( year % 4 == 0 )
        printf("The year you were born in is a leap year") ;
    else
        printf("The year you were born in is not a leap year") ;
    printf("\n") ;
    return 0 ;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int costp , sellp ;
    printf("Enter the cost price of the product in Rs : ") ;
    scanf("%d" , &costp) ;

    printf("Enter the selling price of the product in Rs : ") ;
    scanf("%d" , &sellp) ;

    if ( sellp - costp > 0 )
        printf("Heyy, You have made a profit of Rs %d\n" , sellp - costp) ;
    else if ( sellp - costp == 0 )
        printf("Hmmm!,No Loss...No Profit...") ;
    else
        printf("Oops, you incurred a loss of Rs %d\n" , abs(sellp - costp)) ;
    printf("\n") ;
    return 0 ;
}



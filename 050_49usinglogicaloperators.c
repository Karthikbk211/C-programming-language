#include<stdio.h>
main ()
{
    char ms , gen ;
    int age ;

    printf("Enter your marital status ([M]arried/[U]nmarried : ") ;
    scanf("%c" , &ms) ;

    printf("Enter your gender([M]ale/[F]emale: ") ;
    scanf("%c" , &gen) ;

    printf("Enter your age : ") ;
    scanf("%d" , &age) ;

    if (( ms == 'M' || ms == 'm' )||( gen == 'M' || gen == 'm' && age >= 30 )||( gen == 'F' || gen == 'f' && age >= 25 ))
        printf(" You are eligible to receive a bonus.") ;
    else
        printf(" You are not eligible to receive a bonus.") ;
    printf("\n") ;
    return 0 ;
}

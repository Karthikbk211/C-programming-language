#include<stdio.h>
main()
{
    int age ;
    char gen ;
    printf("Enter your gender ([M]ale/[F]emale) : ") ;
    scanf("%c" , &gen) ;

    printf("\nEnter your age : ") ;
    scanf("%d" , &age) ;

    if ( age < 5 )
        printf("\nYou have received full concession ( No ticket is required ).\n ") ;

    else if ( gen == 'm' || gen == 'M' )
            if ( age >= 60 )
               printf("\nYou have received a concession of 50%% due to old age.\n") ;
            else
               printf("\nYou do not meet the minimum conditions required for receiving a concession.\n") ;
    else
         if ( gen == 'f' || gen == 'F' )
                    if ( age > 50 )
                        printf("\nYou have received a concession of 50%% due to old age.\n") ;
                     else
                        printf("\nYou do not meet the minimum conditions required for receiving a concession.\n") ;
    else
       printf("\aInvalid Gender or Invalid age.\n") ;
    printf("\n") ;
    return 0 ;
}

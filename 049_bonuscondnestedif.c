#include<stdio.h>
int main()
{
    char ms , gen ;
    int age ;

    printf("Enter your marital status([M]arried/[U]nmarried): ") ;
    scanf("%c" , &ms) ;

    if ( ms == 'M' || ms == 'm' )
        printf("You are eligible to receive the bonus") ;
    else
        if ( ms == 'U' || ms == 'u')
    {
        printf("Enter your gender ([M]ale/[F]emale) : ") ;
        fflush(stdin) ;
        scanf("%c" , &gen) ;
            if ( gen == 'M' || gen == 'm' || gen == 'F' || gen == 'f' )
            {
              printf("Enter your age : ") ;
              scanf("%d" ,&age) ;
            if ( gen == 'M' || gen == 'm')
                if ( age >= 30 )
                    printf("You are eligible to receive the bonus") ;
                else
                    printf("You are not eligible to receive the bonus") ;
            else
                if ( gen == 'F' || gen == 'f')
                    if ( age >= 25 )
                    printf("You are eligible to receive the bonus") ;
                    else
                    printf("You are not eligible to receive the bonus") ;
            }

            else
                printf("\aInvalid gender") ;

    } else
        printf("\aInvalid marital status") ;

    printf("\n") ;
    return 0 ;
}

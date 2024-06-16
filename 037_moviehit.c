#include<stdio.h>
main()
{
    char mov1[20] , mov2[20] , mov3[20] ;
    float rate1 , rate2 , rate3 ;
    printf("Enter the name of the first movie : ") ;
    scanf("%s" , &mov1) ;

    printf("Enter the name of the second movie : ") ;
    scanf("%s" , &mov2) ;

    printf("Enter the name of the third movie : ") ;
    scanf("%s" , &mov3) ;

    printf("Enter the rating of %s : " , mov1) ;
    scanf("%f" , &rate1) ;

    printf("Enter the rating of %s : " , mov2) ;
    scanf("%f" , &rate2) ;

    printf("Enter the rating of %s : " , mov3) ;
    scanf("%f" , &rate3) ;

    if ( rate1 > rate2 && rate1 > rate3 )
        printf("\n%s is the hit movie amongst the other two" , mov1) ;
    else if ( rate2 > rate3 )
        printf("\n%s is the hit movie amongst the other two" , mov2) ;
    else
        printf("\n%s is the hit movie amongst the other two" , mov3) ;
    printf("\n") ;
    return 0 ;
}




























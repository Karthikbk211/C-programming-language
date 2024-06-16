#include<stdio.h>
int main()
{
    char friend1[20] , friend2[20] ;
    int age1 , age2 ;
    printf("Enter the name of friend1 : ") ;
    scanf("%s" , &friend1) ;

    printf("Enter the name of friend2 : ") ;
    scanf("%s" , &friend2) ;

    printf("Enter the age of %s : " , friend1) ;
    scanf("%d" , &age1) ;

    printf("Enter the age of friend2 : " , friend2) ;
    scanf("%d" , &age2) ;
    if ( age1 > age2 )
        printf("%s is older than %s" , friend1 , friend2) ;
    else if ( age2 > age1)
        printf("%s is older than %s" , friend2 , friend1) ;
    else
        printf("%s and %s are of the same age" , friend1 , friend2) ;
    printf("\n") ;
    return 0 ;

}

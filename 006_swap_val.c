#include<stdio.h>
int main()
{
    int A , B ;
    A=B=0 ;
    printf("Enter The Value Of A : ") ;
    scanf("%d", &A) ;

    printf("Enter The Value Of B : ") ;
    scanf("%d", &B) ;

    A = A + B ;
    B = A - B ;
    A = A - B ;

    printf("A is %d" , A) ;
    printf("\nB is %d" , B) ;
    printf("\n") ;
    return 0 ;
}

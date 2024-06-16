#include<stdio.h>
int main()
{
    float A , B , Result ;
    printf("Enter The Value Of A ..: ") ;
    scanf("%f" , &A) ;

    printf("Enter The Value Of B ..: ") ;
    scanf("%f" , &B) ;

    Result = (A + B) * (A + B) ;
    printf("(%.f + %.f)^2 = %.f\n", A, B, Result);
    return 0 ;

}

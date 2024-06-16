#include<stdio.h>
int main ()
{
    int Age ;
    printf("Enter your age : ") ;
    scanf("%d" , &Age) ;

    if ( Age >= 18 )
        printf("Congratulations!\"You are eligible\" for casting your vote.\n") ;
    else
        printf("Oops!Yo are \"Too Young\" to vote.\n") ;
    printf("\n") ;
    return 0 ;
}

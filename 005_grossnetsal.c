#include<stdio.h>
int main ()
{
    int Basic , Gross , Net , HRA , DA , PF ;
    Basic=Gross=Net=HRA=DA=PF=0 ;

    printf("Enter the Basic Salary ..:") ;
    scanf("%d",&Basic) ;

    HRA = (Basic*20)/100 ;
    DA = (Basic*10)/100 ;
    PF = (Basic*5)/100 ;

    Gross = Basic + HRA + DA ;
    Net = Gross - PF ;

    printf("The Gross Salary is ..: %d " , Gross) ;
    printf("\nThe Net Salary is ..: %d " , Net) ;

    printf("\n") ;
    return 0 ;

}

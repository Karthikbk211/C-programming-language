#include<stdio.h>
int main ()
{
     int Tm , Hours , Minutes ;
     Tm=Hours=Minutes ;

     printf("Enter total time in minutes ..:") ;
     scanf("%d" , &Tm) ;

     Hours = Tm/60;
     Minutes = Tm%60;

     printf("The total flying time from Hyderabad to Singapore is %d in Hours and %d in Minutes...", Hours , Minutes) ;

     printf("\n") ;

}


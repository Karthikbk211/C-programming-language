#include<stdio.h>
int main()

{
int English , Maths , Sanskrit , Physics , Chemistry ;
float Total , Average ;
English = Maths = Sanskrit = Physics = Chemistry = Total = Average = 0 ;
printf("The Marks of English is ..: ") ;
scanf("%d",&English) ;

printf("The Marks of Maths is ..: ") ;
scanf("%d",&Maths) ;

printf("The Marks of Sanskrit is ..: ") ;
scanf("%d",&Sanskrit) ;

printf("The Marks of Physics is ..: ") ;
scanf("%d",&Physics) ;

printf("The Marks of Chemistry is ..: ") ;
scanf("%d",&Chemistry) ;

Total = English + Maths + Sanskrit + Physics + Chemistry ;
Average = Total/5 ;

printf("\nTotal is ..:%.2f", Total) ;
printf("\nAverage is ..:%.2f" , Average) ;

printf("\n") ;
return 0 ;

}

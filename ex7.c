#include <stdio.h>
#include <stdlib.h>

int main()
{
 double celsius,fahrenheit;
 printf("Enter temperature in celsius:");
 if(scanf("%1f",&celsius) !=1){
    printf("invalid input.\n");
    return 1;
 }
 fahrenheit=celsius*9.0/5.0+32.0;
 printf("%2f C =%2fdegreefahrenheit\n",celsius,fahrenheit);
    return 0;
}

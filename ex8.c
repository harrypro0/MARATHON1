#include <stdio.h>
#include <stdlib.h>

int main()
{
int totalsecond,hours,minutes,seconds;
printf("enter number of seconds:");
if(scanf("%d",&totalsecond)!=1 || totalsecond<0){
    printf("invalid input.\n");
    return 1;
}
hours=totalsecond/3600;
minutes=(totalsecond %3600)/60;
seconds=totalsecond %60;
 printf("%d seconds= %d hours, %d minutes, %d seconds\n",totalsecond, hours, minutes, seconds);

    return 0;
}

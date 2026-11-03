#include <stdio.h>
#include <stdlib.h>

int main()
{
 int x,y;
 printf("enter two integers:");
 if (scanf("%d %d",&x,&y)!=2){
    printf("invalid number\n");
    return 1;
 }
 x=x+y;
y=x-y;
x=x-y;
printf("after swap: x=%d,y=%d\n",x,y);
    return 0;
}

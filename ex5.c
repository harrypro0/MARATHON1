#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length,width,perimeter,area;
    printf("enter length\n");
    scanf("%d",&length);
    printf("enter width\n");
    scanf("%d",&width);
    perimeter=(length+width)*2;
    printf("perimeter=%d",perimeter);
    area=length*width;
    printf("area=%d",area);

    return 0;
}

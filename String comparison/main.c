#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *x;
    char *y;

    scanf("%s",x);
    while(*(x++)==*(y++))
printf("%s",y);
}

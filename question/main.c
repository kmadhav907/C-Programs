#include <stdio.h>
#include <stdlib.h>

int main()
{int num[5]={3,4,6,2,1};
int *p=num;
int *q=num+2;
int *r=&num[1];
printf("%d\t%d",num[2],*(num-2));
printf("%d\t%d",*p,*(p+1));
printf("%d\t%d",*q,*(q+1));
printf("%d\t%d",*r,*(r+1));
    //printf("Hello world!\n");
    //return 0;
}

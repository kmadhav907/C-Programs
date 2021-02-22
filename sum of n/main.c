#include <stdio.h>
#include <stdlib.h>
int sums(int *ptr,int n)
{int i,sum=0;
for(i=0;i<n;i++)
{
    sum+=*ptr;
    ptr++;

}return sum;

}
int main()
{int a[100],n,sum,i;
printf("Enter the value of n\n");
scanf("%d",&n);printf("Enter the elemetns");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);

}
sum=sums(a,n);
printf("sum= %d ",sum );

    printf("Hello world!\n");
    return 0;
}

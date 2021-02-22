#include <stdio.h>
#include <stdlib.h>
void push(int a,int* q,int f,int r)
{
 if(r<f)
printf("Queue is FUll");
else
r++;
q[r]=a;
}
int pop(int *q, int f,int r)
{
    if(r==-1)
       {

        printf("Queue is Empty");return;}
    int i,j;int n=r;int t;
    for(i=0;i<n;i++)
        for(j=0;j<=n-i-1;j++)
    {
        if(q[j]>q[j+1])
        {
            t=q[j];
            q[j]=q[j+1];
            q[j+1]=t;
        }
    }

}




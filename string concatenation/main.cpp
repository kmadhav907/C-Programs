#include<iostream>
using namespace std;
void sorts(int a[],int n)
{
    int i,j=n,temp;
    for(i=0;i<n;i++)
        while(j>=1)
    {if(a[j-1]>a[j])
    {
        temp=a[j];
        a[j]=a[j-1];
        a[j-1]=temp;}j--;

    }
}
int main()
{
    int a[5]={1,3,2,5,4};
    sorts(a,5);
    for(int i=0;i<5;i++)
    {
        cout<<'\t'<<a[i];
    }
}

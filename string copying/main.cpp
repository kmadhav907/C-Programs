#include <iostream>
#include<string.h>

using namespace std;

int main()
{

    int *a[5];
    int b[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        a[i]=&b[i];
    }
    for(int j=0;j<5;j++)
    {
        cout<<*a[j];
    }

}

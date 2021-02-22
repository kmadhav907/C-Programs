#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char s[1000];
    cin>>s;
    int i,counts=0;int n=strlen(s);
    for(i=0;i<n-1;i++)
        if((s[i]=='(')&&(s[i+1]=')'))
            counts=counts+2;

    cout<<counts;

}

#include <iostream>

using namespace std;

int main()
{int n,i;float sum=0;
cout<<"ENter n";
cin>>n;
for(i=0;i<=n;i++)
{
    sum=sum+(i/(i+1));
}
    cout << "sum" <<sum<<endl;
    return 0;
}

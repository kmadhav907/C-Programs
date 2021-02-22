#include <iostream>

using namespace std;
int powers(int a,int n=2)//HEre a is a number n is its raised power
{
    int i,k=1;
    for(i=1;i<=n;i++)
    {
        k=k*a;
    }
return k;}

int main()
{cout<<powers(5,3);cout<<endl;//This will calculate 5 to power 3
cout<<powers(5);//This will calculate square of 5
   // cout << "Hello world!" << endl;
    return 0;
}

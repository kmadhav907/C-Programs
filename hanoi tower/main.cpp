#include <iostream>

using namespace std;
void TOH(int n, char sour,char aux,char des)
{if (n==1)
{
    cout<<"Move disk"<<n<<"from"<<sour<<"to"<<des<<endl;
    return;
}TOH(n-1,sour,des,aux);
cout<<"Move disk"<<n<<"from"<<sour<<"to"<<des<<endl;
TOH(n-1,aux,sour,des);}



int main()
{int n;
cout<<"ENter the value of n";
cin>>n;
TOH(n,'A','B','C');
return 0;}


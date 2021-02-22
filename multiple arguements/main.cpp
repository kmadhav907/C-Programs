#include <iostream>

using namespace std;


int main()
{int b;
cin>>b;
try
{
if(b==0)
    throw b;
if(b==1)
{
    throw 'a';

}
if(b==2)
    throw 0.5;
b=b/100;

}catch(...)
{
    cout<<"I am mad";
}}


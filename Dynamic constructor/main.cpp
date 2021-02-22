#include <iostream>
#include <stdio.h>
using namespace std;
class strings
{
    public:string a;
    char *b;
    public:strings(char c[10])
    {
        b=new char[10];

        b=c;

        cin>>a;
    }
    void display()
{
cout<<a<<" "<<b;


}

};
int main()
{  cout<<"Enter two strings";
char *c=new char[10];
cin>>c;
    strings a(c);
a.display();
return(0);


}

#include <iostream>

using namespace std;
class time{
long int h,m,secs;
public:
    void input()
{cout<<"Enter time in seconds";
cin>>secs;
}
time compute(time);
void display(){

cout<<"Time: "<<h<<":"<<m<<":"<<secs<<endl;}
};
time time::compute(time a)
{
    time c;
    c.h=a.secs/3600;
    a.secs=a.secs%3600;
    c.m=a.secs/60;
    c.secs=a.secs%60;
    return c;}




int main()
{
    time a,b;
    a.input();
    b=a.compute(a);
    b.display();

    return 0;

}

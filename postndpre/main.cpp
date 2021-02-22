

#include<iostream>
using namespace std;

class Integer {
private:
	int i;

public:

	void input()
	{
	    cout<<"ENTER A number";
	    cin>>i;

	}


	friend Integer operator++(Integer &a,int);



	void display()
	{
		cout << "i = " << i << endl;
	}
}i1;
Integer operator++(Integer &a,int)
{
   {
		Integer temp;
		temp.i = a.i++;
		return temp;
	}
}

int main()
{

	i1.input();

	cout << "Before increment: ";
	i1.display();


	Integer i2 = i1++;

	cout << "After post increment: ";
	i2.display();
	cout<<"THE value of first number is";
	i1.display();}

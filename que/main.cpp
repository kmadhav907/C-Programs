#include<iostream>
#include<stdlib.h>
#include<process.h>
using namespace std;

template<class T>
class Queue
{
      private:
             int front,rear;
             T queue[];
             int maxsize;

      public:


             Queue(int max)
             {   maxsize=max;
                 front=0;
                 rear=-1;
             }
             void insert();
             void deletion();


             void display();
};


template<class T>
void Queue<T>::insert()
{
     T ele;
     if(rear==maxsize-1)
     cout<<"\nSorry the queue is full!";
     else
     {
     cout<<"\nEnter the element to insert : ";
     cin>>ele;
     queue[++rear]=ele;
     }
}

template<class T>
void Queue<T>::deletion()
{
     if(front>rear)
     cout<<"\nSorry the queue is empty!";
     else
     cout<<"\nDeleted element of the queue is : "<<queue[front++];
}

template<class T>
void Queue<T>::display()
{
     if(rear<front)
     cout<<"\nSorry the queue is empty!";
     else
     {
         cout<<"\nQueue elements are : ";
         for(int i=front;i<=rear;i++)
         {
                 cout<<queue[i];
                 cout<<"\t";
         }cout<<'\n';
     }
}

int main()
{
   int ch,ch2;
   Queue <int>q1(5);
   Queue <float>q2(5);
   while(1)
   {
       cout<<"1.INT 2.FLOAT\n";
       cin>>ch;cout<<"1.INSERT 2,DElete 3.Display\n";
       switch(ch){case 1:{cin>>ch2;
       switch(ch2){case 1:q1.insert();break;
       case 2:q1.deletion();break;
       case 3:q1.display();break;
       default:cout<<"Invalid";exit(0);}break;

       }case 2:{cin>>ch2;
       switch(ch2){case 1:q2.insert();break;
       case 2:q2.deletion();break;
       case 3:q2.display();break;
       default:cout<<"Invalid";exit(0);}}break;
       default:cout<<"INVALID ";exit(0);


   }}}

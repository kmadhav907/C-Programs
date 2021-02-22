#include <iostream>
#define max 20
using namespace std;
template<class t>
class queue
{
    int f,r,size;
    t a[max];
public:
     queue(int k)
       {
           f=0;r=-1;size=k;
       }
       void push()
         {
             if(r==(size-1))
             {
                 cout<<"NO\n"<<endl;
             }
             else
             {
                t ele;
             cout<<"ënter the elemet"<<endl;
             cin>>ele;
              a[++r]=ele;
             }
         }
         void pop()
          {
              if((f==0&&r==-1)||(f>r))
              {
                  cout<<"no"<<endl;
              }
              t ele;
              ele=a[f++];
          }
          void display()
           {
                if((f==0&&r==-1)||(f>r))
              {
                  cout<<"no"<<endl;
              }
              else
                for(int i=f;i<=r;i++)
              {
                  cout<<a[i]<<"\t";
              }

           }
};
int main()
{
     int ch1,ch2,k;
       j:cout<<"1:int\n2:float\n"<<endl;
       cin>>ch1;
        if(ch1==1)
        {
            cout<<"ënetre the size"<<endl;
            cin>>k;
            queue<int>q(k);
             while(1)
             {
                 cout<<"1:insert\n2:delete\n3back\n4:exit\n"<<endl;
                 cin>>ch2;
                   switch(ch2)
                     {
                         case 1:q.push();
                                break;
                         case 2:q.pop();
                                break;
                         case 3:goto j;
                         case 4:q.display();
                                break;
                     }
             }


        }
        if(ch1==2)
        {
            cout<<"ënetre the size"<<endl;
            cin>>k;
            queue<float>q(k);
             while(1)
             {
                 cout<<"1:insert\n2:delete\n3back\n4:exit\n"<<endl;
                 cin>>ch2;
                   switch(ch2)
                     {
                         case 1:q.push();
                                break;
                         case 2:q.pop();
                                break;
                         case 3:goto j;
                         case 4:q.display();
                                break;
                     }
             }

}
}

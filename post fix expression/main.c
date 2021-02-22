#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<math.h>

int top=-1;

struct stacks
{
   int a[10];

} s;

int push(int a)
{
    top++;
    s.a[top]=a;
    return 0;

}
int pop()
{
    int a;
    a=s.a[top];
    top--;
    return(a);

}
int main()
{
    char s1[100],sym;
    int i=0,a;
    float val,b;
    gets(s1);
    while(s1[i]!='\0')
    {sym=s1[i];
        if(isdigit(sym))
        {
            push(sym-'0');

        }
        else
        {a=pop();b=pop();
            switch(sym)
            {
              case '*' : {val=b*a;
                         break;}
              case '/': {val=b/a;
              break;}
              case '+':{val=b+a;break;}
              case '^':{val=pow(b,a);break;}
            case '-':{val=b-a;break;}
            }
        }
    }i++;



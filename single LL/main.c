#include <stdio.h>
#include <stdlib.h>
struct node{
int a;
struct node *link;}
*first;
int count=0;
typedef struct node* NODE;
NODE getnode(){
NODE st;
st=(NODE)malloc(sizeof(struct node));
return st;}
void insbeg(int a)
{count++;
    NODE st=getnode();st->a=a;
    if(first==NULL)
      first=st;
    else{
st->link=first;
        first=st;
    }
}
void position(int pos,int a)
{int i;
  NODE st=getnode();st->a=a;
  NODE cur=first;
  if(pos>count+1)
        printf("Cant Insert");
  else{
    for(i=1;i<pos;i++)
      {cur=cur->link;}
    st->link=cur->link;
    cur->link=st;
    count++;
  }

}
void display()
{ NODE cur=first;
if(first==NULL)
{
    printf("Empty");
}
else
 {

    while(cur!=NULL)
    {
        printf("%d\t",cur->a);
        cur=cur->link;
    }cur=NULL;
    free(cur);
}}

int main()
{insbeg(10);
insbeg(20);
display();
//position(3,30);
    printf("Hello world!\n");
    return 0;
}

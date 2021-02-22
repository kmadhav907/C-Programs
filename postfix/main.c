#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#define Max 20
struct stacks
{
    int top;
    double a[Max];

};
void push(char sym,struct stacks *s)
{
    s->a[++s->top]=sym-'0';

}
double pop(struct stacks *s)
{
    return s->a[s->top--];
}
double compute(double op1, double op2,char sym)
{
    switch(sym)
    {
        case '+':return op1+op2;
        case '-':return op1-op2;
        case '*':return op1*op2;
        case '/':return op1/op2;   }
}
int main()
{
    char pf[20],sym;int i=0;double op1,op2,res=0;
    struct stacks s;
    s.top=-1;
    gets(pf);
    while(i!=strlen(pf))
    {
        sym=pf[i++];
        if(isdigit(sym))
        {
            push(sym,&s);
        }
        else
        {
            op2=pop(&s);
            op1=pop(&s);
            res=compute(op1,op2,sym);
            s.a[++s.top]=res;
        }
    }
    res=pop(&s);
    printf("%f",res);
}

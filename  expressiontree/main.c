#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100

struct stack
{
	int top;
	char item[max];
}s;

void push(char ele,struct stack *s)
{if(s->top==max-1)
	printf("overflow");

  else
	{s->item[++s->top]=ele;
		}}

char pop(struct stack *s)
	{ if(s->top==-1)
		printf("underflow");
		else
		return (s->item[s->top--]);
		}
	 int main()
		{ int i,x;
			char s1[10],s2[10];
			s.top=-1;
			printf("enter");
			gets(s1);

			x=strlen(s1);
			for(i=0;i<x;i++)
			{ push(s1[i],&s);}
			for(i=0;i<x;i++)
			{s2[i]=pop(&s);}

			if(strcmp(s1,s2)==0)
			printf("pali");
			else
			printf("not");
			return 0;
			}

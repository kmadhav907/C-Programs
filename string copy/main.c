#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    //printf("Hello world!\n");
    //return 0;
    char a[100]="MADhav";char b[100];
int i;
    char *str1=a;

    for(i=0;i!=strlen(a);i++)
    {
      b[i]=str1;
      str1++;
    }
    b[i]='\0';

    printf("%s\t",b);

}

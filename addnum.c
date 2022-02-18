#include <stdio.h>
int addition(int *d,int *f);

int main()
{
 int a=12,b=13;
int c;
c=addition(&a,&b);
printf("%d+%d=%d",a,b,c);

    return 0;
}
int addition(int *d,int *f)
{
 int sum;   
    sum=*d+*f;
   return sum;
}

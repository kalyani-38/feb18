#include <stdio.h>
int swap(int *d,int *f);// function decalraction

int main()
{
 int a=10,b=20;
 swap(&a,&b); // function call
 printf("print the elements after swapping: a = %d and b = %d\n",a,b);

    return 0;
}
int swap(int *d,int *f) //function defination
{
 int temp;   
   temp = *d;
   *d = *f;
   *f = temp;
   return temp;
}

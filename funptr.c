#include <stdio.h>
int print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
        
    }
}
int main()
{
    int a[]={12,13,14,15,16};
    int n=sizeof(a)/sizeof(a[0]);
    print(a,n);
return 0;
}

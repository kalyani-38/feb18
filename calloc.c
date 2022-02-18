#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ptr=(int*)calloc(5,sizeof(int));//created a block of 5 chracter elements in heep stored 1st mem add of block in ptr
  for(int i=0;i<5;i++){
  scanf("%d",ptr+i);//values
}
for(int i=0;i<5;i++){
printf("%d\n",*(ptr+i));
}
 free(ptr);
 ptr=NULL;
    return 0;
}

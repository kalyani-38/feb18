#include <stdio.h>
#include <stdlib.h>

int main()
{
  float *ptr=(float*)malloc(5*sizeof(float));//created a block of 5 chracter elements in heep stored 1st mem add of block in ptr
  for(int i=0;i<5;i++){
  scanf("%f",ptr+i);//values
}
for(int i=0;i<5;i++){
printf("%f",*(ptr+i));
}
 free(ptr);
 ptr=NULL;
    return 0;
}

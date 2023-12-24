                      /*pointer arthimatic*/
#include <stdio.h>
#include <stdlib.h>
unsigned int num[5]={0xAABBCCDD,0X55,0X66,0X77,0X88};
void *ptr=NULL;
int main()
{
    ptr=&num[0];
   printf("  the value:0X%X\n",*((unsigned short *)ptr));
   ptr=(unsigned int *)ptr+1;
   printf("  the value:0X%X\n",*((unsigned int *)ptr));
  // ptr+=1;
   //printf("  the value:0X%X\n",*((unsigned int *)ptr));
   //ptr+=1;
   //printf(" the value:0X%X\n",*((unsigned int *)ptr));
  // ptr+=1;
  // printf(" the value:0X%X\n",*((unsigned int *)ptr));
  // ptr+=1;
    return 0;
}

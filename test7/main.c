#include <stdio.h>
#include <stdlib.h>
unsigned int num[4]={0x11,0x22,0x33,0x44};
unsigned int *ptr=NULL;
unsigned int *ptr1=NULL;
int main()
{   ptr=&num[0];
    ptr1=&num[0];
    printf("the value of ptr =0x%x\n",*ptr);//0x11
    printf("the value of ptr1 =0x%x\n",*ptr1);//0x11
   ptr=*++ptr1;
    printf("the value of ptr =0x%x\n",ptr);//0x11
    printf("the value of ptr1 =0x%x",ptr1);//0x22
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
unsigned int const num[4]={0x11,0x22,0x33,0x44};
unsigned int num1[4]={0x55,0x66,0x77,0x88};
unsigned int const *ptr=&num[0];
unsigned int const *ptr1=&num[0];
unsigned int const *const ptr2=&num[0];
int *total=&num[3];
int main()
{
    int x=8;
    int y=10;
    sumnum(&x,&y);
    printf("the total :%i",*total);


    return 0;
}

void sumnum (unsigned int *num1,unsigned int *num2){
  *total=*num1+*num2;
}

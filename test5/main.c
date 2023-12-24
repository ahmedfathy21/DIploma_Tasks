#include <stdio.h>
#include <stdlib.h>
unsigned int num1=55;
unsigned int num2=66;
void swap_T1(unsigned int num1,unsigned int num2);
void swap_T2(unsigned int *ptr1,unsigned int *ptr2);
int main()
{
    printf("num1=%i   num2=%i\n",num1,num2);
    swap_T1(num1,num2);
    swap_T2(&num1,&num2);
    printf("num1=%i   num2=%i",num1,num2);
    return 0;
}
void swap_T1(unsigned int num1,unsigned int num2){
      int temp=0;
      temp=num1;
      num1=num2;
      num2=temp;
      printf("num1=%i   num2=%i\n",num1,num2);
}
void swap_T2(unsigned int *ptr1,unsigned int *ptr2){
       int temp=0;
       temp=*ptr1;
       *ptr1=*ptr2;
       *ptr2=*ptr1;
}

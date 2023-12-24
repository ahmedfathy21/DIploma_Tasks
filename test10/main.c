                          /*pointer points to pointer */
#include <stdio.h>
#include <stdlib.h>
unsigned int num1=55;
unsigned int *ptr=&num1;
unsigned int **ptrptr=&ptr;
int main()
{
   printf("the address num1 0x%X:\n",&num1);
   printf("the address stored in ptr 0x%X:\n",ptr);
   printf("the address of ptr 0x%X:\n",&ptr);
   printf("the address num1 0x%X:\n",*(&ptr));
   printf("------------------\n");
   printf("the address stored in ptrptr 0x%X:\n",ptrptr);
   printf("the address of ptrptr 0x%X:\n",&ptrptr);
   printf("the address stored in ptrptr 0x%X:\n",*(&ptrptr));
   printf("the address stored in ptrptr 0x%X:\n",*ptrptr);
    return 0;
}

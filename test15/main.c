#include <stdio.h>
#include <stdlib.h>
unsigned int numbers [2][3]={{1,2,3},{4,5,6}};
unsigned int (*ptr) [3]=numbers;/*a pointer points to 2D_array of unsigned int  */
unsigned int *ptrr[3];/*array of pointers  */
int main()
{
    printf("the address: 0x%X\n",*ptr);/*the address  */
    printf("the address: 0x%X\n",*(ptr+1));/* */
    printf("the address: %i\n",*ptr+2);
    printf("the address: %i\n",*ptr+3);
    printf("the address: %i\n",*ptr+4);
    printf("the address: %i\n",*ptr+5);
    printf("----------------------\n");
    printf("the value: %i\n",*(ptr[0]));/* the value */
    printf("the value: %i\n",*(ptr[0]+1));
    printf("the value: %i\n",*(ptr[0]+2));
    printf("the value: %i\n",*(ptr[1]+0));
    printf("the value: %i\n",*(ptr[1]+1));
    printf("the value: %i\n",*(ptr[1]+2));
    printf("the value: %i\n",*ptr[1]+22);
    printf("----------------------\n");
    printf("the value: %i\n",*(*ptr));/* value */
    printf("the value: %i\n",*(*ptr+1));
    printf("the value: %i\n",*(*ptr+2));
    printf("the value: %i\n",*(*ptr+3));
    printf("the value: %i\n",*(*ptr+4));
    printf("the value: %i\n",*(*ptr+5));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
unsigned int num=99;
unsigned int *ptr=NULL;

int main()
{
    if(ptr==0){
        printf("yes");
    }
   /*if(ptr!=NULL){
    *ptr=99;//valid address.
    printf("the address :%i",*ptr);
   }*/
    return 0;
}

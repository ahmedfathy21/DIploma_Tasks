#include <stdio.h>
#include <stdlib.h>
unsigned int user_size;
unsigned int *ptr=NULL;
int main()
{
    printf("please enter the size in bytes: ");
    scanf("%i",&user_size);
    ptr=malloc(user_size);
    printf("the address of the user_size :0x%x\n ",ptr);
    if(ptr=NULL){
        printf("ERROR!!");
    }
    else{
        printf("space recevied");
    }
    return 0;
}

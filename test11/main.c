#include <stdio.h>
#include <stdlib.h>
 unsigned int *return_address(void);
int main()
{   unsigned int *ptr=NULL;
     ptr=return_address();
     printf("the value ptr :0x%x\n",ptr);/*the pointer points to address that is not here */
     printf("the value ptr :0x%x",*ptr);
    return 0;
}
 unsigned int *return_address(void){
    static unsigned int num1=55;/*stored in data segments not stack frame */
   return(&num1);
  }

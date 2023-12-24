#include <stdio.h>
#include <stdlib.h>

unsigned int *return_arr(void);
unsigned int *ptr=NULL;
int main()
{
    ptr=return_arr();
    for(int count=0;count<5;count++){
        printf("the value :%i\n",*ptr);
        ptr++;
    }
    return 0;
}
 unsigned int *return_arr(void){
  static unsigned int numbers[5]={11,22,33,44,55};/*must store data in another way from stack */
   return numbers;
 }

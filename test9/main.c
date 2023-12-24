#include <stdio.h>
#include <stdlib.h>
unsigned int num=55;
unsigned int *ptr=&num;
char const *message ="ahmed fathy";
int main()
{
    printf("the value %s",message+6);
   /*const char *message1="ahmed abdallah";
    printf("the value :%i\n",*ptr);
     printf("the value 0x%x\n",message);
      printf("the value 0x%x\n",&message);
          printf("the value %s\n",message);
           printf("the value 0x%x\n",message1);
          printf("the value 0x%x\n",&message1);
      printf("the value %s\n",message1);
       *message1='A';
   //  *message='A';
      /*printf("the value %s\n",message);*/
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
unsigned int numbers[5]={11,22,33,44,55};
unsigned int numbers_2D[3][3]={{1,2,3,}
                              ,{4,5,6}
                              ,{7,8,9}};
unsigned int *ptr=numbers;
int main()
{
    unsigned int index1=0;
    unsigned int index2=0;
    printf("the value :0x%X\n",numbers+1);
    printf("the value :0x%X\n",&numbers[0]);
   /* numbers++;/*can not increment on the array num */
    ptr++;
    printf("the value :0x%X\n",ptr);
    printf("----------------------\n");
    printf("the value :%i\n",*(numbers+1));
    printf("----------------------\n");
    printf("the value :%X\n",numbers_2D[1]);
    printf("the value numbers_2D[2][2]:%i\n",*(numbers_2D[2]+2));
    printf("----------------------\n");
    ptr=numbers_2D;
    printf("the value :%X\n",*(ptr+6));
    printf("----------------------\n");
    printf("the value:%i\n",*(*(numbers_2D+1)));
    printf("----------------------\n");
    for(index1=0;index1<3;index1++){
        for(index2=0;index2<3;index2++){
    printf("%i\t",*(numbers_2D[index1]+index2));
    }
    printf("\n");
    }
    return 0;
}

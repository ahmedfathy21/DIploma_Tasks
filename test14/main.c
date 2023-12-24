#include <stdio.h>
#include <stdlib.h>
unsigned int arrnum1[3]={11,22,33};
unsigned int arrnum2[3]={44,55,66};
unsigned int  *const ptrarr[2]={&arrnum1[0],&arrnum2[0]};
int main()
{
    /*ptrarr[0]=&arrnum1[0];
    ptrarr[1]=&arrnum2[0];*/
    printf("the value :%i\n",*(ptrarr[0]+1));
    printf("the value :%i\n",*ptrarr[1]);
    return 0;
}

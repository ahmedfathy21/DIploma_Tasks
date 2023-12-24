#include <stdio.h>
#include <stdlib.h>
char *name="ahmed fathy";
char *const name1="fathy mohamed";
char  names[2][20]={"ahmed fathy","abdallah reda"};
char (*ptrnames)[2][20]=names;/*pointer points to a 2D array char */
int main()
{
    printf("the value %s\n",name);/*the value */
    printf("the value 0x%X\n",name);/*the address */
    printf("the value 0x%X\n",name[0]);
    printf("the value 0x%X\n",name[1]);
    printf("the value 0x%X\n",name[2]);
    printf("-----------------\n");
    printf("the value 0x%X\n",names);/*address stored in pointer*/
    printf("the value 0x%X\n",names + 1);
    printf("the value 0x%X\n",names + 2);
    printf("the value 0x%X\n",names[0]);/*address of pointer*/
    printf("the value 0x%X\n",names[1]);
    printf("the value %s\n",names[0]);
    printf("the value %s\n",names[1]);
    printf("-----------------\n");
    printf("the value 0x%x\n",ptrnames);
    printf("the value %s\n",ptrnames);
    printf("the value %c\n",*(ptrnames[0][0]));
    printf("the value %c\n",*(ptrnames[0][0]+20));
    printf("the value %c\n",*(ptrnames[0][0]+22));

    return 0;
}

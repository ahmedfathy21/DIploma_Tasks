#include <stdio.h>
#include <stdlib.h>
char *names[2]={"ahmed   ","mohamed "};/*array of pointer */
char *(*ptr)[8]=names;/*pointer points to array of 8 ele*/
char (**ptrrr)=&names;/*double pointer*/

int main()
{
    printf("%s\n",(*ptr)[0]);
    printf("%s\n",(*ptr)[1]);
    printf("%s\n",ptrrr[0]);
    printf("%s\n",ptrrr[1]);
    printf("%s\n",*ptrrr);
    printf("%s\n",*ptrrr +2);
    printf("%s\n",*(ptrrr+1)+1);
    printf("--------------\n");
    return 0;
}

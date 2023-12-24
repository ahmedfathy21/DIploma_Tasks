#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void printahmed(void);
int main()
{
    printahmed();

    return 0;
}
void printahmed(void){
 printf("hello ahmed\n");
 sleep(250);
 printahmed();
}

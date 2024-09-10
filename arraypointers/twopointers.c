#include <stdio.h>

int main(void) {
    int a=10;
    int *ptr;
    ptr=&a;
    *ptr=20;
    int **ptr1=&ptr;
    **ptr1=70;
   
    printf("%d\n",a);
    printf("%d\n",*ptr);
    printf("%d\n",**ptr1);
}

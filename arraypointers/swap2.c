#include <stdio.h>
int main() {
    int a = 5, b = 10;
int *p=&a;
int *f=&b;

    int c;
    c=*p;
    *p=*f;
    *f=c;
   
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}

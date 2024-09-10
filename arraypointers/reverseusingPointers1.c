#include <stdio.h>
int main()
{
    int a[5];

int *p;
printf("Enter  elements in the array: \n");
for(p =a; p <= a+5-1;p++)
scanf("%d",p);
printf("Elements in reverse order: \n");
for(p = a+5-1; p>=a;p--)
printf("%d",*p);
return 0;
}

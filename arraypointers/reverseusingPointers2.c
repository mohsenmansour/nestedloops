#include <stdio.h>
int main()
{
int N = 8;
int a[N];
int *p;
printf("Enter %d elements in the array: \n", N);
for(p =a; p <= a+N-1;p++)
scanf("%d",p);
printf("Elements in reverse order: \n");
for(p = a+N-1; p>=a;p--)
printf("%d",*p);
printf("\n");
return 0;
}

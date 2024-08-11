#include <stdio.h>
int add(int a , int b);
int main()
{
int n;
n = add(30,50);
printf("%d\n",n);
}
int add(int a , int b)
{
return b/a;
}

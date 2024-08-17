#include <stdio.h>
void increment()
{
    int a = 5;
int postfix =a++;
printf("Postfix Increment: %d\n", postfix);
}
int main()
{
 increment();
return 0;
}

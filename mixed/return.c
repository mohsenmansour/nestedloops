#include <stdio.h>

int add(int a, int b) 
{
   int result;
   result = a + b;
   return result;
}


int main() {
   int x = 10, y = 20, sum;
   sum = add(x, y);
   printf("The sum of %d and %d is %d\n", x, y, sum);
   return 0;
}

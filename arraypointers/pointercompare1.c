#include <stdio.h>

int main()
{
   int a[]={5,16,7,89,45,32,10};
   int *p = &a[1];
   int *q = &a[5];

   printf("%d\n",*(p+3));
   printf("%d\n",*(q-3));

   printf("%ld\n",q-p);

   printf("%d\n",p<q);
   printf("%d\n",*p < *q);

    return 0;
}

#include <stdio.h>
int main() {
  {
        int i, j, k;

        for (i = 0; i < 10; i++)
        {
printf("%d ",i);
for (j = 0; j < 10; j++)
                {
                        k = j * i;
                        if (j == 0)
                        {
putchar(k + '0');
}
else if (k >= 10)
                        {
putchar(',');
putchar(' ');
putchar((k / 10) + '0');
putchar((k % 10) + '0');
}
                }
putchar('\n');
        }
}
}

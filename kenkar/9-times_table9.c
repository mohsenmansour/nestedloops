#include <stdio.h>
int main() {
  {
        int i, j, k;

        for (i = 0; i < 10; i++)
        {
                for (j = 0; j < 10; j++)
                {
                        k = j * i;
                        if (j == 0)
                        {
printf("%d",k);
}
if (k < 10 && j != 0)
{
printf(",");
printf(" ");
printf(" ");
printf("%d",k);
}
else if (k >= 10)
{
printf(",");
printf(" ");
printf("%d",k/10);
printf("%d",k%10);
}
}
printf("\n");
}
}
}

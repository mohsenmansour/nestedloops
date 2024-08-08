#include <stdio.h>
int main() {
  {
        int i, j, k;

        for (i = 0; i < 10; i++)
        {
                for (j = 0; j < 10; j++)
                {
                        k = j * i;
printf("%d, ",k);
printf(" ");
}
printf("\n");
}
}
}

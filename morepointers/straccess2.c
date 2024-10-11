#include <stdio.h>

int main() {

   int grades[] = {50, 75, 100, 67, 90};

   

  for (int i = 0 ;grades[i]!='\0' ;i++) 
    printf("grades[%d]=%d\n", i ,grades[i]); 
}

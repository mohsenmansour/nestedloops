#include <stdio.h>

int main() {

    int grades[] = {50, 75, 100, 67, 90};

    int i = 0;

    while (i < sizeof(grades)/sizeof(grades[0]))
    {

        printf("grades[%d]=%d\n", i, grades[i]);
        i++;
    }
}

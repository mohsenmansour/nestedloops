#include <stdio.h>
#include <ctype.h>

int main () {
   int var1 = 'Q';
   int var2 = 'q';
   int var3 = '3';
if( isalpha(var1))
{
printf("var1 = |%c| ia alphabet\n",var1);
}
if( isalpha(var2))
{
printf("var2 = |%c| ia alphabet\n",var2);
}
if( isalpha(var3))
{
printf("var3 = |%c| ia alphabet\n",var2);
}
if( isalpha(var3))
{
printf("var3 = |%c| ia alphabet\n",var3);
}
else
{
printf("var3 = |%c| is not alphabet\n",var3);
}
printf("\n");
}

#include <stdio.h>  
int compareTwoString(char a[],char b[])  
{  
    
   int i = 0;  // integer variables declaration  
    while(a[i]!='\0' && b[i]!='\0')  // while loop  
    {  
       if(a[i]!=b[i])  
       {  
           break;  
       }  
       i++;  
    } 
}
int main()  
{  
   char a[50]; // declaration of char array  
   char b[50]; // declaration of char array
   
   printf("Enter the first string : ");  
   scanf("%s",a);  
   
   printf("Enter the second string : ");  
   scanf("%s",b);  
   
   int c= compareTwoString(a,b); // calling compareTwoString() function  
   if(c==0)  
   printf("strings are same");  
   else  
   printf("strings are not same");  
  
   return 0;  
}  



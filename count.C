#include<stdio.h>
#include<conio.h>
int main()
{
 int count_char=0;
 char str[20];
 printf("Enter string : ");
 gets(str);
 for(i=0; str[i]!=NULL; i++)
 {
   count_char++;
   if(str[i]==' ')
 }
 printf("\nNumber of characters in string : %d",count_char);
 return 0;
}

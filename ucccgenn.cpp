#include<stdio.h>
int main()
{
 int num,c;
 printf("Enter loop repeat number(rows): ");
 scanf("%d",&num);
 for(; num>=1; num--)
 {
  for(c=num; c>=1; c--)
     printf("%d",c);
  printf("\n");
 }
 return 0;
} 

#include<stdio.h>
int main()
{
 int num,c,r;
 printf("Enter loop repeat number(rows): ");
 scanf("%d",&num);
 for(r=1; num>=r; r++)
 {
  for(c=r; c>=1; c--)
     printf("%d",c);
  printf("\n");
 }
 return 0;
}

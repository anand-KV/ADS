#include<stdio.h>
#include<stdlib.h>
void main()
{
 int a[100],n
 printf("Enter the size of the array:");
 scanf("%d",&n);
 printf("Enter %d values:");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("Enter the value to be searched:");
 scanf("%d",&s);
 i=0;
 while(i<n)
 {
  if(a[i]==s)
  {
   printf("value %d found in position %d",s,i);
   flag=1;
   }
   else
   i++;
   }
   if(flag==0)
   {
    printf("value is not found:");
    }
    getch();
    }

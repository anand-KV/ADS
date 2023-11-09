#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a[100],n,i,j,m,flag=0,u,l,k,x;
 printf("Enter the size of the array:");
 scanf("%d",&n);
 printf("enter %d elements:",n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
  /**printf("sorted elements are:");
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
   if(a[i]>=a[j])
   {
    x=a[i];
    a[i]=a[j];
    a[j]=x;
    }
    }
    }**/
   for(i=0;i<n;i++)
   {
    printf("\t %d",a[i]);
    }
    printf("\nEnter the target value:");
    scanf("%d",&k);
    l=0;
    u=n-1;
    while(l<=u)
    {
     m=(l+u)/2;
     if(a[m]==k)
     {
      printf("the value %d is in %d position",k,m+1);
      flag=1;
      break;
      }
      else if(k>a[m])
      {
       l=m+1;
       }
       else
       {
        u=m-1;
        }
        }
        if(flag==0)
        printf("value not found!!");
       return 0;
       } 
        
      

#include<stdio.h>
#include<stdlib.h>
int a[30],m,u,l,i,k,n,f=1;
int main()
{
 printf("enter the size of the array:");
 scanf("%d",&n);
 printf("\nenter %d elements:",n);
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }
  printf("\nenter %d elements:",n);
 for(i=0;i<n;i++)
 {
    printf("%d-->",a[i]);
 }
 printf("\nenter the target value:");
 scanf("%d",&k);
 l=0;
 u=n-1;
 while(l<=u){
    m=(l+u)/2;
    if(a[m]==k)
    {
    printf("value found at postion %d",m+1);
    f=1;
    break;
    }
    else if(k>a[m])
    {
	l=m+1;
    }
    else{
	u=m-1;
    }
 }
 if(f==0)
 {
    printf("\value not found:\n");

 }
 return 0;

}
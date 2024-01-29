#include<stdio.h>
#include<stdlib.h>
int a[30],n,i,f=0,k;
int main()
{
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("\nenter %d elemnts:\n",n);
    for(i=0;i<n;i++)
    {
	scanf("%d",&a[i]);
    }
    printf("\nenter %d elemnts:\n");
    for(i=0;i<n;i++)
    {
	printf("%d-->",a[i]);
    }
    printf("\n enter the target value:");
    scanf("%d",&k);
    i=0;
    while(i<n)
    {
	if(a[i]==k)
	{
	    printf("\n value found at position%d",i+1);
	    f=1;
            break;

	}
	else
	i++;

    }
    if(f==0)
    {
	printf("\n value not found\n");
    }
    return 0;
}

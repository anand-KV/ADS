#include<stdio.h>
#include<stdlib.h>
void insert();
void delete();
void display();
int a[50],i,n,f=-1,r=-1,v;
void insert()
{
  if(r==n-1)
  {
    printf("queue is in overflow condition:");
  }
  else
  { f=0;
    printf("enter the element to be inserted:");
    scanf("%d",&v);
    r++;
    a[r]=v;
    printf("pushed successfully");

  }
}
void delete()
{
    if(f==-1)
    {
	printf("queue is in underflow comdition");

    }
    else
    {
       printf("element deleted:%d",a[f]);
       f++;
    }
}
void display()
{
    for(i=f;i<=r;i++)
    {
	printf("%d-->",a[i]);
    }
}
int main()
{
  int c;

    printf("enter the size of the queue:");
    scanf("%d",&n);
    while(1){
	printf("stack operations:1.insert\n2.delete\n3.display\n4.exit");
	printf("\n enter your choice:");
        scanf("%d",&c);
        if(c==1)
        {
            insert();
        }
        if(c==2)
        {
            delete();
        }
        if(c==3)
        {
            display();
        }
        if(c==4)
        {
            exit(0);
        }
  }  
  return 0;
}
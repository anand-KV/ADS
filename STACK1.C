#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int a[50],i,n,top=-1,v;
void push()
{
  if(top==n-1)
  {
    printf("stack is in overflow condition:");
  }
  else
  {
    printf("enter the element to be inserted:");
    scanf("%d",&v);
    top++;
    a[top]=v;
    printf("pushed successfully");

  }
}
void pop()
{
    if(top==-1)
    {
	printf("stack is in underflow comdition");

    }
    else
    {
       printf("element deleted:%d",a[top]);
       top--;
    }
}
void display()
{
    for(i=0;i<=top;i++)
    {
	printf("%d-->",a[i]);
    }
}
int main()
{
  int c;

    printf("enter the size of the stack:");
    scanf("%d",&n);
    while(1){
	printf("stack operations:1.push\n2.pop\n3.display\n4.exit");
	printf("\n enter your choice:");
        scanf("%d",&c);
        if(c==1)
        {
            push();
        }
        if(c==2)
        {
            pop();
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
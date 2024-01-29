#include<stdio.h>
void insert();
void delete();
void display();
int n,i,a[30],pos,v;
void insert()
{
  printf("\nenter the element to be inserted:");
  scanf("%d",&v);
  printf("\nenter the position:") ;
  scanf("%d",&pos);
  for(i=n-1;i>=pos-1;i--)
  {
    a[i+1]=a[i];
  } 
  a[pos-1]=v;
  n++;
  printf("\n----inserted succesfully-----\n");
}
void delete()
{
  printf("\nenter the position to be deleted:");
  scanf("%d",&pos);
  for(i=pos-1;i<n;i++)
  {
    a[i]=a[i+1];
  }  
  n--;
  printf("\n-----deleted successfully-----\n");
}
void display()
{
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }  
}
int main()
{
    int c;

  printf("enter the size of the array:");
  scanf("%d",&n);
  printf("\nenter %d values:\n",n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]); 
  }  
  while(1){
  printf("array operations:\n1.insert\n2.delete\n3.display\n");
  printf("enter your choice:");
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
  }
  return 0;
}
#include<stdio.h>
int u[10]={1,2,3,4,5,6,7,8,9,10};
void display(int *arr);
int find(int *arr);

int main()
{
  int u[10]={1,1,1,1,1,1,1,1,1,1};
  int a[10]={1,1,1,1,1,0,0,1,1,0};
  int b[10]={0,0,0,0,0,0,0,0,0,1};
  int a_union_b[10],p_a,p_b,p,i;
  printf("\n Universal set is: \n");
  display(u);
  printf("\n A is: \n");
  display(a);
  printf("\n B is: \n");
  display(b);
  p_a=find(a);
  printf("\n Parent of a is %d \n",p_a);
  p_b=find(b);
  printf("\n Parent of b is %d \n",p_b);
  if(p_a==p_b)
  {
     printf("\n Union is \n");
     for(i=0;i<10;i++)
     {
        a_union_b[i]=a[i]||b[i];
     
     }
        
  }
  else
  {
     printf("\n disjoint set \n ");
     
  }
 return 0;
}

void display(int *arr)
{
  int *ar=arr,i;
  for(i=0;i<10;i++)
  {
    if(*ar==1)
    printf("%d \t",u[i]);
    *ar++;
  }
}

int find(int *arr)
{
  int *ar=arr,i;
  
  for(i=0;i<10;i++)
  {
    if(*ar==1)
    return u[i];
    *ar++;
  }
  return 0;
}

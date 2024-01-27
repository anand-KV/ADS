#include<stdio.h>
int n,a[50][50],q[30],vi[20],f=r=-1;
void bfs(int v)
{
  for(i=0;i<n;i++)  
  {
    if(a[v][i]&&vi[i]==0)
    {
        r++;
        q[r]=i;
        vi[i]=1;
        printf("%d--",i);
    }
  }
  f++;
  if(f<=r)
  bfs(q[f]);
}
void main()
{
    int x,i,j;
    printf("enter the number of vertices:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        vi[i]=0;
    }
    printf(" enter the adjacency matrix:")
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        if(i!=j)
        {
           printf("(%d,%d)->",i,j);
           scanf("%d",x);
           a[i][j]=a[j][j]=x; 
        }
      }  
    }
    printf("adjacency matrix:");
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)  
      {
        printf("%d",a[i][j]);
      }
    }
    printf("enter the starting vertex:");
    scanf("%d",&v);
    r=f=0;
    q[r]=v;
    vi[v]=1;
    bfs(v);
    if(r!=n-1)
    {
        printf("not possible:");
    }
}
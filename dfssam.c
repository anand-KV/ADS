#include<stdio.h>
int n,a[20][20],vi[50],stck[50],top=-1,v,item;
void dfs(int v)
{
    int i;
   for(i=1;i<=n;i++)
   {
    if(a[v][i]!=0&&vi[i]==0)
    {
        top++;
        stck[top]=i;
        vi[i]=1;
        printf("%d--",i);
        dfs(i);
       
    }
   
   } 
}
void main()
{
    int i,j,c;
    printf("enter the number of vertices:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       vi[i]=0; 
    }
    printf("enter the adjacency matrix:");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i!=j)
            {
                printf("(%d,%d)-->",i,j);
                scanf("%d",&c);
                a[i][j]=a[j][i]=c;
            }
        }
    }
    printf("adjacency matrix:\n");
    {
       for(i=1;i<=n;i++)  
       {
         for(j=1;j<=n;j++)
         {
            printf(" %d \t",a[i][j]);
         }
         printf("\n");
       }
    }
    printf("enter the starting vertex:\n");
    scanf("%d",&v);
    top=1;
    stck[top]=v;
    vi[v]=1;
    printf("%d--",v);
    dfs(v);
    if(top!=n-1)
    printf("end");
}

#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node *lnode;
int data;
struct node *rnode;
};
struct node *root=NULL,*newnode,*r=NULL,*rt,*t1,*tp;//globally declaring 
void create()
  {
    int v;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value to the node: ");
    scanf("%d",&v);
    newnode->data=v;
    newnode->lnode=NULL;
    newnode->rnode=NULL;
  }
void search(struct node *rt)
{
  if(newnode->data < rt->data && rt->lnode==NULL)//if value less than root node,then pass value to left node 
     rt->lnode=newnode;
  else if(newnode->data > rt->data && rt->rnode==NULL)//if value greater than root node,then pass value to left node 
     rt->rnode=newnode;
  else if(newnode->data < rt->data && rt->lnode!=NULL)//if value less than root node,then search value on left node 
     search(rt->lnode);
  else if(newnode->data > rt->data && rt->rnode!=NULL)//if value less than root node,then search value on left node 
     search(rt->rnode);
  else if(newnode->data==rt->data)
     printf("\n value entered twice");
  else
     printf("\n Invalid Entry");
}
void insert()
  {
    create();
    if(root==NULL)
       root=newnode;
    else
       search(root);
  }
  void deletenode(struct node *rt)
    {
     if(r==NULL)
       r=rt;
     if(rt->lnode==NULL && rt->rnode==NULL)
       {
         if(rt==r->lnode)
            r->lnode=NULL;
         else if(rt==r->rnode)
            r->rnode=NULL;
         else
             printf("\n Invalid Value");
         if(root==rt)
            root=NULL;
         free(rt);
       }
     else if(rt->lnode!=NULL && rt->rnode==NULL)
       {
         if(rt==r)
           root=rt->lnode;
         else if(rt==r->lnode)
           r->lnode=rt->lnode;
         else if(rt==r->rnode)
           r->rnode=rt->rnode;
         else
           printf("\n Invalid Value");
         free(rt);
       }
     else if(rt->lnode==NULL && rt->rnode!=NULL)
     	{
     	  if(rt==r)
     	    {
     	      root=rt->rnode;
     	    }
     	  else if(rt==r->lnode)
     	    {
     	      r->lnode=rt->rnode;
     	    }
     	  else if(rt==rt->rnode)
     	    {
     	      r->rnode=rt->rnode;
     	    }
     	  else
     	     printf("\n Invalid Value");
     	  free(rt);
     	}
     	
    else if(rt->lnode!=NULL && rt->rnode!=NULL)
      {
       t1=rt->rnode;
       if(t1->rnode!=NULL)
          {
           tp=rt;
           while(t1->lnode!=NULL)
              {
                tp=t1;
                t1=t1->lnode;
              } 
           rt->data=t1->data;
           if(t1->rnode!=NULL)
              tp->rnode=t1->rnode;
           if(tp!=rt)
             tp->lnode=NULL;
           free(t1);
             
          
          }
     else
       {
         rt->data=t1->data;
         if(t1->lnode!=NULL)
            rt->rnode=t1->lnode;
         else
            rt->rnode=NULL;
         free(t1);   
       }
          
      }  
   else
      printf("\n invalid Value");
         
       
    }
 void dsearch(struct node *rt,int dval)
{
   if(rt->data==dval) 
   {
     deletenode(rt);
   } 
else if(dval < rt->data && rt->lnode!=NULL) 
  {
    r=rt;
    dsearch(rt->lnode,dval );
  } 
 else if(dval > rt->data && rt->rnode!=NULL)
  {
    r=rt;
    dsearch(rt->rnode,dval);
  } 
 else
   printf("\nValue not found !");
}

void deletel()
  {
     int dval;
     printf("enter the node to be deleted: ");
     scanf("%d",&dval);
     if(root==NULL)
        printf("\n The tree is Empty");
     else
       dsearch(root,dval);
  }
void inorder(struct node *root)
   {
     if(root!=NULL)
       {
         
         inorder(root->lnode);
         printf("-%d-",root->data);
         inorder(root->rnode);
        }
   }     
 int main()
{
int ch;
printf("choose a Binary Search Tree operation : \n1.Insertion\n 2.Deletion\n 3.Display\n4.Exit");
while(1) {
printf("\nEnter a choice :");
scanf("%d",&ch);
switch(ch) {
case 1:
insert();
break;
case 2:
deletel();
break;
case 3:
inorder(root);
break;
case 4:
exit(0);
break;
default :
printf("invalid value");
break;
}
}
return 0;
}

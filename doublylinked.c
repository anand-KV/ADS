#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *prev,*nxt;
 };
 struct node *strt=NULL;
 //function to traverse an print linked list
 void trav()
 {
  //if list is empty
  if(strt==NULL)
  {
   printf("empty list");
   }
   //else print the data
   struct node *tem;
   tem=strt;
   while(tem!=NULL)
   {
    printf("value is:%d\n",tem->data);
    tem=tem->nxt;
    }
  }
  // to insert at front
   void insrtfrnt()
   {
    int data;
    struct node *tem;
    tem=(struct node*)malloc(sizeof(struct node));
    printf("Enter the number to be inserted:");
    scanf("%d",&data);
    tem->data=data;
    tem->prev=NULL;
    //pointer of tem will be assinged to strt
    tem->nxt=strt;
    strt=tem;
    }
    //insrt at the end of linked list
    void insrtatend()
    {
     int data;
     struct node *tem,*trv;
     tem=(struct node*)malloc(sizeof(struct node));
     tem->prev=NULL;
     tem->nxt=NULL;
     printf("\n Enter number to be insert at end:");
     scanf("%d",&data);
     tem->data=data;
     tem->nxt=NULL;
     trv=strt;
     //if strt is NULL
     if(strt==NULL)
     {
      strt=tem;
      }
      //else change the link
      else
      {
       while(trv->nxt!=NULL)
       trv=trv->nxt;
       tem->prev=trv;
       trv->nxt=tem;
       }
     }
     //insert at any position
     void insrtatpos()
     {
      int data,pos,i=1;
      struct node *tem,*newn;
      newn=(struct node*)malloc(sizeof(struct node));
      newn->prev=NULL;
      newn->nxt=NULL;
      //entering postion and data
      printf("Enter the position:");
      scanf("%d",&pos);
      printf("Enter the number to be inserted:");
      scanf("%d",&data);
      newn->data=data;
      tem=strt;
      //if strt is NULL
      if(strt==NULL)
      {
       strt=newn;
       newn->prev=NULL;
       newn->nxt=NULL;
       }
       //if postion is 1
         else if(pos==1)
         {
          newn->nxt=strt;
          newn->nxt->prev=newn;
          newn->prev=NULL;
          strt=newn;
          }
          //change links
          else
          {
           while(i<pos-1)
           {
            tem=tem->nxt;
            i++;
            }
            newn->nxt=tem->nxt;
            newn->prev=tem;
            tem->nxt=newn;
            tem->nxt->prev=newn;
            }
      }
      //to delete from first
      void delfrst()
      {
       struct node *tem;
       //to chck whether list is empty
       if(strt==NULL)
        printf("list is empty");
        else
        {
         tem=strt;
         strt=strt->nxt;
         if(strt!=NULL)
         strt->prev=NULL;
         free(tem);
         }
      }
      // to delete from end
      void delend()
      {
      struct node *tem;
      //if list is empty
      if(strt==NULL)
      printf("list is empty");
      tem=strt;
      while(tem->nxt!=NULL)
      tem=tem->nxt;
      if(strt->nxt==NULL)
      strt=NULL;
      else
      {
       tem->prev->nxt=NULL;
       free(tem);
      }
     }
     //delete from pos
     void delepos()
     {
      int pos,i=1;
      struct node *tem,*position;
      tem=strt;
      if(strt==NULL)
      printf("list is empty");
      else
      //position to be deleted
      printf("Enter the position:");
      scanf("%d",&pos);
      // if the pos is first node
      if(pos==1)
      {
       position=strt;
       strt=strt->nxt;
       if(strt!=NULL)
       {
        strt->prev=NULL;
        }
        free(position);
      }
      
      //move till the position comes
      while(i<pos-1)
      {
       tem=tem->nxt;
       i++;
       }
       //change the link
       position=tem->nxt;
       if(position->nxt!=NULL)
       {
       position->nxt->prev=tem;
       tem->nxt=position->nxt;
       //free memory
       free(position);
       }
     }
    int main()
    {
      int c;
    do
    {
     printf("\n1.add first\n2.add at position\n3.add at the end\n4.display\n5.delete end\n6.delete first\n7.delete at postion\n8.exit");
     printf("enter ur choice:");
     scanf("%d",&c);
     if(c==1)
     {
      insrtfrnt();
      break;
      }
      if(c==2);
      {
                
       insrtatpos();      
       break;
       }
       if(c==3)
       {
       insrtatend();
       break;
       }      
       if(c==4)
       {
       trav();
       break;
       }
        if(c==5)     
         {
         delend();
         break;
         }
         if(c==6)  
         {
         delfrst();
         break;
         }
         if(c==7)  
         {
         delepos();
         break;
         }
         if(c==8)  
         {
         exit(0);
         }  
       }while(c!=11) ; 
      return(0);
       }
         
                  
       
 

#include<stdio.h>
#include<stdlib.h>
struct node
{
 //int data;
 struct node *next;
 };
 struct node *head=NULL;
 //struct node dupe;
 void intstrt()
 {
  //int data;
  struct node *temp,*newnode,*data;
 newnode=(struct node*)malloc(size of(struct node));
   printf("Enter the input:");
  scanf("%d",&newnode->data);
 // temp->data=data;
  newnode->next=head;
  head=newnode;
  }
  void intend()
  {
   //int data;
   struct node *temp,*newnode,*data;
   
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("\n Enter the value(end):");
   scanf("%d",&newnode->data);
   //temp->data=data;
   newnode->next=NULL;
   if(head==NULL)
   {
    head=newnode;
    }
    else
    {
     temp=head;
     while(temp->next!=NULL)
     {
      temp=temp->next;
      }
      temp->next=newnode;
      }
     }
    void intpos()
    {
     int  pos,i;
     
     struct node *temp,*swap,*newnode,*data;
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("\enter the value to be inserted:");
     scanf("%d",&newnode->data);
     printf("\n enter the position:");
     scanf("%d",&pos);
     
     //temp->data=data;
     newnode->next=NULL;
     if(head==NULL)
     {
      head=newnode;
      }
     else
     {
      temp=head;
      for(i=1;i<(pos-1)&&(temp->next!=NULL);i++)
       {
        printf("%d",temp->data);
        temp=temp->next;
        }
       if(i==(pos-1))
       {
        swap=temp->next;
        temp->next=newnode;
        newnode->next=swap;
        }
        else
        {
         printf("not a valid position:");
         }
        }     
        }
      void display()
      {
       int i=1;
       struct node *temp;
       temp=head;
       if(temp!=NULL)
       {
        while(temp->next!=NULL)
        {
         printf("%d th element\t %d \n",i,temp->data);
         temp=temp->next;
         i++;
         }
         printf("%d th element\t %d \n",i,temp->data);
         }
         else
         {
          printf("\n linked list is empty:\n");
          }
         }
        void dltend()
        {
         struct node *temp,*pre;
         pre=NULL;
         temp=head;
         int i;
         if(temp!=NULL)
         {
           while(temp->next!=NULL)
           {
            pre=temp;
            temp=temp->next;
            i++;
            }
            }
         printf("\n deleting %d th element %d",i,temp->data);
         if(temp==head) 
         {
          head=NULL;
          free(temp);
          }else{
          pre->next=NULL;
          free(temp)}
          else
          {
           printf("empty linkedlist");
          }
          
        void dltpos()
        {
         int pos,i=1;
         struct node *dt,*pre;
         dt=head;
         printf("enter the position of element to be deleted:");
         scanf("%d",&pos);
         if(dt!=NULL)
         {
          while(dt->next!=NULL&&i<(pos))
          {
           i++;
           pre=dlt;
           dlt=dlt->next;
           printf("\n %d :%d",i,dt->data);
           }
           if(i==pos&&dt==head)
           {
            head=dt->next;
            printf("head  changed");
            printf("\n the deleting element is %d",i,dt->data)   
            free(dt);
            }
            else if(i==pos)
            {
             pre->next=dt->next;
             printf("\n the deleting element is %d",i,dt->data);
             free(dt);
             }
             else
             {
              printf("invalid");
              }
               else
               printf("the linked list is empty:");
               }
             }  
             void dltstrt()
             {
              struct node *temp;
              temp=head;
              if(temp!=NULL)
              {
               head=temp->next;
               printf("\n deleted element is %d",temp->data);
               free(temp);
               else
               printf("the linkedlist is empty");
               }}
   int main()
   {
    int c;
    //printf("\n1.add first\n2.add at position\n3.add at the end\n4.display\n5.delete end\n6.delete first\n7.delete at postion\n8.exit");
    do
    {
     printf("\n1.add first\n2.add at position\n3.add at the end\n4.display\n5.delete end\n6.delete first\n7.delete at postion\n8.exit");
     printf("enter ur choice:");
     scanf("%d",&c);
     if(c==1)
     {
      intstrt();
      break;
      }
      if(c==2);
      {
                
       intpos();      
       break;
       }
       if(c==3)
       {
       intend();
       break;
       }      
       if(c==4)
       {
       display();
       break;
       }
        if(c==5)     
         {
         dltend();
         break;
         }
         if(c==6)  
         {
         dltstrt();
         break;
         }
         if(c==7)  
         {
         dltpos();
         break;
         }
         if(c==8)  
         {
         exit();
         }  
       }while(c<11)  
       }
            
                      
          
        
        
       
       
         

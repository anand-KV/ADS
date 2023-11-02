#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
 };
 struct node *head=NULL;
 struct node dupe;
 void intstrt()
 {
  int data;
  struct node *ptr,*temp;
  printf("Enter the input:");
  scanf("%d",&data);
  temp=(struct node*)malloc(size of(dupe));
  temp->data=data;
  temp->next=head;
  head=temp;
  }
  void intend()
  {
   int data;
   struct node *ptr,*temp;
   printf("\n Enter the value(end):");
   scanf("%d",&data);
   temp=(struct node*)malloc(sizeof(dupe));
   temp->data=data;
   temp->next=NULL;
   if(head==NULL)
   {
    head=temp;
    }
    else
    {
     ptr=head;
     while(ptr->next!=NULL)
     {
      ptr=ptr->next;
      }
      ptr->next=temp;
      }
     }
    void intpos()
    {
     int data, pos,i;
     
     struct node *ptr,*swap,*temp;
     printf("\enter the value to be inserted:");
     scanf("%d",&data);
     printf("\n enter the position:");
     scanf("%d",&pos);
     temp=(struct node*)malloc(sizeof(dupe));
     temp->data=data;
     temp->next=NULL;
     if(head==NULL)
     {
      head=temp;
      }
     else
     {
      ptr=head;
      for(i=1;i<(pos-1)&&(ptr->next!=NULL);i++)
       {
        printf("%d",ptr->data);
        ptr=ptr->next;
        }
       if(i==(pos-1))
       {
        swap=ptr->next;
        ptr->next=temp;
        temp->next=swap;
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
       struct node *ptr;
       ptr=head;
       if(ptr!=NULL)
       {
        while(ptr->next!=NULL)
        {
         printf("%d th element\t %d \n",i,ptr->data);
         ptr=ptr->next;
         i++;
         }
         printf("%d th element\t %d \n",i,ptr->data);
         }
         else
         {
          printf("\n linked list is empty:\n");
          }
         }
        void dltend()
        {
         struct node *dlt,*pre;
         pre=NULL;
         dlt=head;
         int i;
         if(dlt!=NULL)
         {
           while(dlt->next!=NULL)
           {
            pre=dlt;
            dlt=dlt->next;
            i++;
            }
            }
         printf("\n deleting %d th element %d",i,dlt->data);
         if(dlt==head) 
         {
          head=NULL;
          free(dlt);
          }
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
              struct node *dlt;
              dlt=head;
              if(dlt!=NULL)
              {
               head=dlt->next;
               printf("\n deleted element is %d",dlt->data);
               free(dlt);
               else
               printf("the linkedlist is empty");
               
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
            
                      
          
        
        
       
       
         

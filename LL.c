#include<stdio.h>
#include<stdlib.h>
struct Node
{
     int data;
     struct Node* next;
};

struct Node* insertatend(struct Node* head,int data)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    if(head==NULL)
    {
        return newNode;
    }
    struct Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    return head;
}
struct Node* insertatbegining(struct Node* head,int data)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=head;
    return newNode;
}
void printlist(struct Node* head)
{
    struct Node* temp=head;
    while(temp!=NULL)
    {
       printf("%d->",temp->data);
       temp=temp->next;
    }
    printf("NULL");
}
int search(struct Node* head,int key)
{
     int position=1;
     struct Node* temp=head;
     while(temp!=NULL)
     {
          if(temp->data==key)
          {
               return position;
          }
          temp=temp->next;
          position++;
     }
     return -1;
}



int main()
{
    int choice,value;
    while(1)
    {
    printf("\n****Linked list Operations****\n");
    printf("1.Insertion at begining\n");
    printf("2.Insertion at End\n");
    printf("3.Searching\n");
    printf("4.isEmpty\n");
    printf("5.Length\n");
    printf("6.Sorting\n");
    printf("7.Max\n");
    printf("8.min\n");

    printf("Enter Your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      printf("Enter the element to push:");
      scanf("%d",&value);
      insertatbegining(head,data);
      break;
      case 2:
     printf("Enter the element to push:");
      scanf("%d",&value);
      insertatend(head,data);
      break;
      case 3:
       printf("Enter the element to push:");
      scanf("%d",&value);
      search(head,key);
      break;
      case 4:
      if(isEmpty())
      {
          printf("Stack is empty");
      }
      else
      {
          printf("Stack is not empty");
      }
      break;
    //   case 5:
    //   if(isFull())
    //   {
    //       printf("Stack is full");
    //   }
    //   else
    //   {
    //       printf("Stack is not full");
    //   }
    //   break;
      case 6:
      PrintStack();
      break;
      case 7:
      printf("Thank You!....");
      exit(0);
      default:
      printf("Invalid choice");
      break;
    }
    }
}

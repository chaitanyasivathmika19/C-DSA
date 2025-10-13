#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* top=NULL;
int isEmpty()
{
    return top==NULL;
}
void push(int value)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=top;
    top=newNode;
    printf("Pushed element is %d",value);
}
int pop()
{
    if(isEmpty())
    {
        printf("Stack is empty");
        return -1;
    }
    struct Node* temp=top;
    int poppedEle=top->data;
    top=top->next;
    free(temp);
    return poppedEle;
}
int peek()
{
    if(isEmpty())
    {
        printf("Stack is empty");
        return -1;
    }
    return top->data;
}
void PrintStack()
{
    if(isEmpty())
    {
        printf("Stack is empty");
        return;
    }
    printf("Stack elements\n");
    struct Node *temp=top;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int choice,value;
    while(1)
    {
    printf("\n****Stack Operations****\n");
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Peek\n");
    printf("4.isEmpty\n");
    // printf("5.isFull\n");
    printf("6.PrintStack\n");
    printf("7.Exit\n");
    printf("Enter Your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      printf("Enter the element to push:");
      scanf("%d",&value);
      push(value);
      break;
      case 2:
      value=pop();
      if(value!=-1)
      {
          printf("Popped element is:%d",value);
      }
      break;
      case 3:
      value=peek();
      if(value!=-1)
      {
          printf("Peek element is %d",value);
      }
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

#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int stack[MAX];
int top=-1;
int isEmpty()
{
    return top==-1;
}
int isFull()
{
    return top==MAX-1;
}
void push(int value)
{
    if(isFull())
    {
        printf("Stack is Full");
        return;
    }
    stack[++top]=value;
    printf("Pushed element is %d",value);
}
int pop()
{
    if(isEmpty())
    {
        printf("Stack is empty");
        return -1;
    }
    return stack[top--];
}
int peek()
{
    if(isEmpty())
    {
        printf("Stack is empty");
        return -1;
    }
    return stack[top];
}
void PrintStack()
{
	int i;
    if(isEmpty())
    {
        printf("Stack is empty");
        return;
    }
    printf("Stack elements\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
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
    printf("5.isFull\n");
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
      case 5:
      if(isFull())
      {
          printf("Stack is full");
      }
      else
      {
          printf("Stack is not full");
      }
      break;
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

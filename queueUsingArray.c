#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int Queue[MAX];
int front=-1;
int rear=-1;
int isEmpty()
{
    return front==-1 || front>rear;
}
int isFull()
{
    return rear==MAX-1;
}
void EnQueue(int value)
{
    if(isFull())
    {
        printf("Queue is Full");
        return;
    }
    if(front==-1)
    {
        front=0;
    }
    Queue[++rear]=value;
    printf("EnQueueed element is %d",value);
}
int Deque()
{
    if(isEmpty())
    {
        printf("Queue is empty");
        return -1;
    }
    int Dequeed_ele=Queue[front++];
    if(front>rear)
    {
        front=rear=-1;
    }
    return Dequeed_ele;
}
int peek()
{
    if(isEmpty())
    {
        printf("Queue is empty");
        return -1;
    }
    return Queue[front];
}
void PrintQueue()
{
	int i;
    if(isEmpty())
    {
        printf("Queue is empty");
        return;
    }
    printf("Queue elements\n");
    for(i=front;i<=rear;i++)
    {
        printf("%d\n",Queue[i]);
    }
}
int main()
{
    int choice,value;
    while(1)
    {
    printf("\n****Queue Operations****\n");
    printf("1.EnQueue\n");
    printf("2.Deque\n");
    printf("3.Peek\n");
    printf("4.isEmpty\n");
    printf("5.isFull\n");
    printf("6.PrintQueue\n");
    printf("7.Exit\n");
    printf("Enter Your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      printf("Enter the element to EnQueue:");
      scanf("%d",&value);
      EnQueue(value);
      break;
      case 2:
      value=Deque();
      if(value!=-1)
      {
          printf("Dequeed_ele element is:%d",value);
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
          printf("Queue is empty");
      }
      else
      {
          printf("Queue is not empty");
      }
      break;
      case 5:
      if(isFull())
      {
          printf("Queue is full");
      }
      else
      {
          printf("Queue is not full");
      }
      break;
      case 6:
      PrintQueue();
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

#include<stdio.h>
#include<stdlib.h>
int stk[10],i,n,top=-1;
void push()
{
	int ele;
	if(top==10-1)
	{
		printf("STACK IS FULL");
	}
	else
	{
		printf("Enter the element to be pushed: ");
		scanf("%d",&ele);
		top++;
		stk[top]=ele;
	}
}
void pop()
{
	if(top==-1)
	printf("STACK IS EMPTY");
	else
	{
		printf("popped element is %d ",stk[top]);
		top=top-1;
	}
}
void peak()
{
	printf("peak element is %d",stk[top]);
}
void display()
{
	int i;
	if(top==-1)
	printf("STACK IS EMPTY");
	else
	{
		for(i=top;i>=0;i--)
		printf("%d\n",stk[i]);
	}
}
int main()
{
	int ch;
	printf("STACK OPERATIONS");
	do
	{
		printf("\n1.Push\n2.Pop\n3.Peak\n4.Display\n5.Exit");
		printf("\n\nEnter the choice:");
		scanf("%d",&ch);
		switch(ch) 
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peak();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
			default:
				printf("\nInvalid choice!!");
		}
	}while(ch>0 && ch<=5);
}

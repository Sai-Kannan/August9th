#include<stdio.h>
int arr[3];
int top=-1;//created global variable;
void push(int ele)
{
	if(top==2)
	{
		printf("stack overflow\n");
	}
	else
	{
		top++;
		arr[top]=ele;
		printf("pushed stack : %d\n",arr[top]);
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack underflow\n");
	}
	else
	{
		printf("popped out stack : %d\n",arr[top]);
		top--;
	}
}
int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	pop();
	pop();
	pop();
	pop();
}

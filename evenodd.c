#include<stdio.h>
int main()
{
	int a[100];
	printf("even numbers are :");
	for(int i=1,j=1;i<=100,j<100;i++,j++)
	{
	    	if(i%2==0)
	    	printf(" %d ",i);
	    	else
	    	a[j]=i;
	}
	printf("odd numbers are : ");
		    	for(int j=0;j<100;j++)
				printf(" %d ",a[++j]);
}

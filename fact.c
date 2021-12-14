#include<stdio.h>
int main()
{
	int x,fact;
	printf("enter any number");
	scanf("%d",&x);
	fact=factorial(x);
	printf("factorial of %d is %d",x,fact);
}
int factorial(int x)
{
	int temp;
	if(x==1)
	return 1;
	else
	{ 
	temp=x*factorial(x-1);
	return temp;
	}
}

#include<stdio.h>
int main()
{
	int n=20;
	
	int sum = n*(n+1)/2;
	sum *=sum;
	printf("sum is :%i\n",sum);
	return 0;
}

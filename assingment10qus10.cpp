#include<stdio.h>
int main()
{
	int num,rem,prod=1;
	printf("enter a number:");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		prod*=rem;
		num/=10;
	}
	printf("%d", prod);
}


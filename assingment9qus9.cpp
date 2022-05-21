#include<stdio.h>
int main()
{
	int i, num, even_sum=0;
	printf("enter the value of the num/n");
	scanf("%d",&num);
	for(i=2; i<num; i++)
	{
		if(i%2==0)
		  even_sum=even_sum=i;
	}
	printf("sum of all even number = %d/n",even_sum);
}

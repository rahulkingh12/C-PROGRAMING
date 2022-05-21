#include<stdio.h>
#include<cmath>
int main()
{
	int a,b,c,s,Area;
	a=3;
	b=4;
	c=5;
	s=((a+b+c)/2);
	Area=sqrt((s*(s-a)*(s-b)*(s-c)));
	printf("Area : %d", Area);
    return(0);
}

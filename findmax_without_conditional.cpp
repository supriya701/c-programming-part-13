#include<stdio.h>
int findmax(int,int);
int main()
{
	int a,b,max;
	printf("enter 1st no");
	scanf("%d",&a);
	printf("enter 2nd no");
	scanf("%d",&b);
	max=findmax(a,b);
	printf("max no is %d",max);
	
}
int findmax(int a,int b)
{
	int z,i,max;
	z=a-b;
	i=(z>>31)& 0x1;
	max=a-i*z;
	return max;
}

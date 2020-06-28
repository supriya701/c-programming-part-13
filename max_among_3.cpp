#include<stdio.h>
int findmax(int,int);
int main()
{
	int a,b,c,max;
	printf("enter 1st no");
	scanf("%d",&a);
	printf("enter 2nd no");
	scanf("%d",&b);
	printf("enter 3rd no");
	scanf("%d",&c);
	max=findmax(a,b);
	max=findmax(max,c);
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

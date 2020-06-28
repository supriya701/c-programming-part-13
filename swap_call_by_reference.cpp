#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("enter 1st no");
	scanf("%d",&a);
	printf("enter 2nd no");
	scanf("%d",&b);
	swap(&a,&b);
	printf("after swapping the nos are %d and %d",a,b);
}
void swap(int* a,int* b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

#include<stdio.h>
int main()
{
	int a=0,b=1,n,c,temp,i;
	printf("enter the range ");
	scanf(" %d",&n);
	printf(" %d",a);
	printf(" %d",b);
	for(i=0;i<n;i++){
		c = a+b;
		printf(" %d",c);
		temp = a;
		a = b;
		b = c;
	}
}

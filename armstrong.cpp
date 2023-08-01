#include<stdio.h>
int main()
{
	int i,n,temp,x,m=0;
	printf("enter the number ");
	scanf("%d",&n);
	temp = n;
	while(n>0){
		x = n%10;
		m = m+(x*x*x);
		n = n/10;
	}
	if(m == temp )
	{
	   printf("armstrong number ");
	}
	else{
		printf("not an armstrong number ");
	}
}

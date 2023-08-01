#include<stdio.h>
int main()
{
	int i,n,x,m=0;
	printf("ENter any number: ");
	scanf("%d",&n);
	while(n>0){
		x = n%10;
		m = x+m;
		n = n/10;
	}
	printf("Sum of he digits is %d: ",m);
}

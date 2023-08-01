#include<stdio.h>
int main()
{
	int i,x=0,n;
	printf("enter the number ");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
			x = x+1;
		}
	}
	if(x==0){
		printf("It is prime");
	}
	else{
		printf("It is not prime");
	}
	
}

#include<stdio.h>
void main(){
	int n,ld,sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	ld=n%10;
	while(n>=10){
		n/=10;
	}
	sum=ld+n;
	printf("sum=%d",sum);
}

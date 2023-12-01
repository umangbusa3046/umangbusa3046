#include<stdio.h>
void main()
{
	int n,sum=0,count=0;
	float avg;
	printf("enter 0 to stop the program");
	while(1){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		sum=sum+n;
		count++;
	}
	avg=sum/count;
	printf("%0.2f\n",avg);
	printf("%d",sum);
}

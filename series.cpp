#include<stdio.h>
int main()
{
	int n;
	double sum=0.0;
	printf("enter the ending number:\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum+=(double)(2*i-1)/(2*i);
	}
	printf("sum of even numbers:%.6f",sum);
	return 0;
}

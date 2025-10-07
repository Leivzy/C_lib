#include<stdio.h>
int main()
{
	int a,n;
	scanf("%d\n%d",&a,&n);
	int sum=0;
	int temp=0;
	for(int i=0;i<n;i++)
	{
		temp=temp*10+a;
		sum += temp;
	}
	printf("%d",sum);
	return 0;
}
#include <stdio.h>
int main() 
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
    	int num;
    	scanf("%d\n",&num);
    	if(num%6==0 || num>=100000 && num<=999999 || num%10==6)
    	{
    		printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
    return 0;
}
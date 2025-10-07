#include <stdio.h>
#include<stdlib.h>
int main() 
{
    int x,y;
    char c;
    scanf("%d %d %c",&x,&y,&c);
    if(c!='+' && c!='-' && c!='*' && c!='/')
    {
    	printf("Invalid operater");
	}
	else if(c=='+')
	{
		printf("%d",x+y);		
	}
	else if(c=='-')
	{
		printf("%d",x-y);
	}
	else if(c=='*')
	{
		printf("%d",x*y);
	}
	// else if(c='/',y=0)
	else if(c=='/'&&y==0)
	{
		printf("Divided by zero");
	}
	else if(c=='/')
	{
		printf("%d",x/y);
	}
	return 0;
}
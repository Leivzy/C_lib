
#include <math.h>
#include <stdio.h>
int main()
{
	float a,b,c;
	float d,x1,x2;
	scanf("%f %f %f",&a,&b,&c);//先赋值再运算 
	d=b*b-4*a*c;
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	if(fabs(d)>1e-6)
	{
		printf("x1=%.3f x2=%.3f\n",x1,x2);
	}
	else if(fabs(d)<1e-6)
	{
		printf("x1=x2=%.3f\n",x1);
	}
	else
	{
		float p=-b/(2*a);
		float q=sqrt(-d)/(2*a);
		printf("x1=%.3f+&.3fi x2=%.3f-%.3fi\n",p,q,p,q);
	}
	return 0;
}
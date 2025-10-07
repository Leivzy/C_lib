// #include<math.h>
// //使用 scanf 和 printf 函数,得添标准输入输出库 <stdio.h>
// #include <stdio.h>

// int main()
// {
// 	float a,b,c,x1,x2,p,q,d;
//     //↓↓这里abc还没赋值
// 	// d=b*b-4*a*c;
// 	// scanf("%f %f %f",&a,&b,&c);
// 	scanf("%f %f %f",&a,&b,&c);
// 	d=b*b-4*a*c;
// 	if(fabs(d)>1e-6)
// 	{
//         // a/b*c  -> 会变成a先除b再乘c
// 		// printf("x1=%.3f x2=%.3f",(-b+sqrt(d))/2*a,(-b-sqrt(d))/2*a);
// 		printf("x1=%.3f x2=%.3f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
// 	}
// 	else if(fabs(d)<1e-6)
// 	{
//         //问题同上
// 		// printf("x1=x2=%.3f",-b/2*a);
// 		printf("x1=x2=%.3f",-b/(2*a));
// 	}
// 	else
// 	{
// 		p=-b/(2*a);
// 		q=sqrt(-d)/(2*a);
// 		// printf("%.3f+%.3fi %.3f-%.3fi",p,q,p,q);
// printf("x1=%.3f+%.3fi x2=%.3f-%.3fi\n", p, q, p, q);
// 	}
// 	return 0;
// }

#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b, c = 1;
    float d;
    d = b * b - 4 * a * c;
    float p = -b / (2 * a);
    float q = sqrt(-d) / (2 * a);
    printf("x1=%.3f+%.3fi x2=%.3f-%.3fi\n", p, q, p, q);

    return 0;
}

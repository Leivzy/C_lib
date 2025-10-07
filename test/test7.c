// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     float R;
//     int n;
//     scanf("%f %d",&R,&n);
//     printf("Area=%.2f",n*R*R*sin(2*3.1415926/n)/2);
//     return 0;
// }
#include<stdio.h>
#include<math.h>

#define PI 3.1415926  // 定义π为3.1415926

int main() {
    float R;
    int n;
    
    // 输入圆半径和正n边形的边数
    // scanf("%f %d", &R, &n);
scanf("%f,%d", &R, &n);

    // 计算并输出圆内接正n边形的面积
    printf("Area=%.2f", n * R * R * sin(2 * PI / n) / 2);

    return 0;
}

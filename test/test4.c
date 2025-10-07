#include <stdio.h>
#include <math.h>

int main()
{
    // system("chcp 65001");
    double a, b, c;
    double discriminant, root1, root2;

    // printf("请输入方程的系数a, b, c：\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // 计算Δ
    discriminant = b * b - 4 * a * c;

    //()
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);

    printf("方程的两个实根为：\n");
    printf("x1=%.2lf x2=%.2lf", root1, root2);

    return 0;
}

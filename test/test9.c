
#include <stdio.h>
#include <math.h>

#define EPSILON 1e-6  

int main() {
    float a, b, c;  
    float delta, x1, x2;  

    scanf("%f %f %f", &a, &b, &c);

    // 计算判别式 delta
    delta = b * b - 4 * a * c;

    // 根据 delta 的值分类讨论
    if (delta > EPSILON) {
        // delta > 0，有两个不相等的实根
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1=%.3f x2=%.3f\n", x1, x2);
    } else if (fabs(delta) < EPSILON) {
        // delta 接近0，有两个相等的实根
        x1 = x2 = -b / (2 * a);
        printf("x1=x2=%.3f\n", x1);
    } else {
        // delta < 0，有两个共轭复数根
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-delta) / (2 * a);
        printf("x1=%.3f+%.3fi x2=%.3f-%.3fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
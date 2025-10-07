#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    // 输入三条边的长度
    printf("请输入三条边的长度，以空格分隔：");
    scanf("%f %f %f", &a, &b, &c);

    // 判断是否为三角形
    if (a + b > c && a + c > b && b + c > a) {
        // 判断是否为等边三角形
        if (fabs(a - b) < 0.001 && fabs(b - c) < 0.001) {
            printf("等边三角形\n");
        }
        // 判断是否为等腰三角形
        else if (fabs(a - b) < 0.001 || fabs(a - c) < 0.001 || fabs(b - c) < 0.001) {
            // 判断是否为等腰直角三角形
            if (fabs(a * a + b * b - c * c) < 0.001 || 
                fabs(a * a + c * c - b * b) < 0.001 || 
                fabs(b * b + c * c - a * a) < 0.001) {
                printf("等腰直角三角形\n");
            } else {
                printf("等腰三角形\n");
            }
        }
        // 判断是否为直角三角形
        else if (fabs(a * a + b * b - c * c) < 0.001 || 
                 fabs(a * a + c * c - b * b) < 0.001 || 
                 fabs(b * b + c * c - a * a) < 0.001) {
            printf("直角三角形\n");
        }
        // 普通三角形
        else {
            printf("普通三角形\n");
        }
    }
    // 不是三角形
    else {
        printf("非三角形\n");
    }

    return 0;
}

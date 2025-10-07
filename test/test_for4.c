#include <stdio.h>

int main() {
    int n;
    printf("请输入要判断的组数：");
    scanf("%d", &n);

    char results[n][4];  // 用于存储每组结果，"YES" 或 "NO"

    for (int i = 0; i < n; i++) {
        int a1, a2, a3, b1, b2, b3;

        // 输入第 i 组的两个箱子尺寸
        printf("请输入第 %d 组箱子A的尺寸：", i + 1);
        scanf("%d %d %d", &a1, &a2, &a3);

        printf("请输入第 %d 组箱子B的尺寸：", i + 1);
        scanf("%d %d %d", &b1, &b2, &b3);

        // 对箱子A的尺寸进行简单排序（升序）
        if (a1 > a2) { int temp = a1; a1 = a2; a2 = temp; }
        if (a1 > a3) { int temp = a1; a1 = a3; a3 = temp; }
        if (a2 > a3) { int temp = a2; a2 = a3; a3 = temp; }

        // 对箱子B的尺寸进行简单排序（升序）
        if (b1 > b2) { int temp = b1; b1 = b2; b2 = temp; }
        if (b1 > b3) { int temp = b1; b1 = b3; b3 = temp; }
        if (b2 > b3) { int temp = b2; b2 = b3; b3 = temp; }

        // 比较每一维度是否满足嵌套条件
        if (a1 <= b1 && a2 <= b2 && a3 <= b3) {
            // 如果A的每一维度都小于等于B，则可以嵌套
            sprintf(results[i], "YES");
        } else {
            // 否则不能嵌套
            sprintf(results[i], "NO");
        }
    }

    // 输出所有结果
    printf("结果：\n");
    for (int i = 0; i < n; i++) {
        printf("第 %d 组：%s\n", i + 1, results[i]);
    }

    return 0;
}

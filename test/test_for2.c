#include <stdio.h>

int main() {
    int n;
    printf("请输入要加密的数字组数：");
    scanf("%d", &n);  // 读取要输入的组数

    for (int i = 0; i < n; i++) {
        int num, a, b, c, d;
        
        // 输入一个四位整数
        printf("请输入第 %d 个四位整数：", i + 1);
        scanf("%d", &num);

        // 分离每一位数字
        a = num / 1000;       // 千位
        b = (num / 100) % 10; // 百位
        c = (num / 10) % 10;  // 十位
        d = num % 10;         // 个位

        // 每位数字加上5并对10取余
        a = (a + 5) % 10;
        b = (b + 5) % 10;
        c = (c + 5) % 10;
        d = (d + 5) % 10;

        // 直接调整位置进行输出，交换第一位和第四位，第二位和第三位
        int encryptedNum = d * 1000 + c * 100 + b * 10 + a;
        printf("加密后的数字为：%d\n", encryptedNum);
    }

    return 0;
}

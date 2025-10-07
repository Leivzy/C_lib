#include <stdio.h>

int main() {
    char str[100];  // 定义字符串用于输入
    scanf("%s", str);  // 读取输入字符串

    int i = 0;
    while (str[i] != '\0') {  // 遍历字符串每个字符
        str[i] = str[i] + 4;  // 直接将每个字符加4
        i++;
    }

    // 输出加密后的字符串
    printf("%s\n", str);

    return 0;
}
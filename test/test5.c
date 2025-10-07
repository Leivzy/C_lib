#include <stdio.h>

int main()
 {
    char upper;
    printf("请输入一个大写字母：");
    scanf("%c", &upper);
    char lower = upper + 32;
    printf("对应的小写字母是：%c\n", lower);
    return 0;
}
#include<stdio.h>

int main() 
{
    char c;
    int a;

    scanf("%c %d", &c, &a);


 if (c == 'A' || c == 'a') {
        printf("黑桃");
    } else if (c == 'B' || c == 'b') {
        printf("红桃");
    } else if (c == 'C' || c == 'c') {
        printf("梅花");
    } else if (c == 'D' || c == 'd') {
        printf("方块");
    } else {
        return 1;
    }

    if (a >= 2 && a <= 10) {
        printf("%d\n", a);
    } else if (a == 1) {
        printf("A\n");
    } else if (a == 11) {
        printf("J\n");
    } else if (a == 12) {
        printf("Q\n");
    } else if (a == 13) {
        printf("K\n");
    } else {
        printf("\n无效的点数");
    }

    return 0;
}

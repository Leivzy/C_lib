#include <stdio.h>
int main()
{
    int n;
    int num[n];
    scanf("%d", &n); // 读取数据个数

    for (int i = 0; i < n; i++)
    {
        int data;
        scanf("%d", &data);

        int d1 = data / 1000;
        int d2 = (data % 1000) / 100;
        int d3 = (data % 100) / 10;
        int d4 = data % 10;

        d1 = (d1 + 5) % 10;
        d2 = (d2 + 5) % 10;
        d3 = (d3 + 5) % 10;
        d4 = (d4 + 5) % 10;

        int encryptedData = d4 * 1000 + d3 * 100 + d2 * 10 + d1;
        // printf("%d ", encryptedData);
        num[i] = encryptedData;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", num[i]);
    }
    return 0;
}
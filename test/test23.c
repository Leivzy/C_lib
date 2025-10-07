#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int len = 0;
        int temp = n;
        for (; temp > 0; temp /= 10)
        {
            len++;
        }
        if (n % 6 == 0 || len % 6 == 0 || n % 10 == 6)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}


#include <stdio.h>

int main(void)
{
    int n;
    long total = 0;
    int i;

    scanf("%d", &n);

    if (n < 0)
    {
        printf("NG");
        return 0;
    }

    // 1からnまでの偶数を合計する
    for (i = 1; i <= n; i++)
    {
        // 偶数の場合だけ合計に加える
        if (i % 2 == 0)
        {
            total += i;
        }
    }

    printf("%ld", total);

    return 0;
}

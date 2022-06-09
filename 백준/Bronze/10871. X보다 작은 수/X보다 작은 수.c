#include <stdio.h>

int main(void)
{
    int N, X, a;
    scanf("%d %d", &N, &X);
    for (; N > 0; N--)
    {
        scanf("%d ", &a);
        if (a < X)
            printf("%d ", a);
    }
    return 0;
}
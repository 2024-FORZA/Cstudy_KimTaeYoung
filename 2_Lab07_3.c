#include <stdio.h>

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);

    int a = x % 10;      // 1�� �ڸ�
    int b = (x / 10) % 10; // 10�� �ڸ�
    int c = x / 100;     // 100�� �ڸ�

    int d = a * 100 + b * 10 + c;

    int e = y % 10;      // 1�� �ڸ�
    int f = (y / 10) % 10; // 10�� �ڸ�
    int g = y / 100;     // 100�� �ڸ�

    int h = e * 100 + f * 10 + g;

    if (d < h)
        printf("%d\n", h);
    else
        printf("%d\n", d);

    return 0;
}
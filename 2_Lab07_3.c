#include <stdio.h>

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);

    int a = x % 10;      // 1의 자리
    int b = (x / 10) % 10; // 10의 자리
    int c = x / 100;     // 100의 자리

    int d = a * 100 + b * 10 + c;

    int e = y % 10;      // 1의 자리
    int f = (y / 10) % 10; // 10의 자리
    int g = y / 100;     // 100의 자리

    int h = e * 100 + f * 10 + g;

    if (d < h)
        printf("%d\n", h);
    else
        printf("%d\n", d);

    return 0;
}
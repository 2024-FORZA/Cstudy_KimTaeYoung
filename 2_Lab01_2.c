#include <stdio.h>
#include <math.h>

int main()
{
    double a = 0, b = 0, c = 0;
    double temp = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
    temp = sqrt((a * a) / (b * b + c * c));
    printf("%d %d", (int)(b * temp), (int)(c * temp));
    return 0;
}
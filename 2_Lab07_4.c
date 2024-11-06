#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    int average = (a + b + c + d + e) / 5;
    printf("%d\n", average);

    int arr[5] = { a, b, c, d, e };

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int median = arr[2];
    printf("%d", median);

    return 0;
}
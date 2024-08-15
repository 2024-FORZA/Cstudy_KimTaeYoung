//1547
#include <stdio.h>

int main() {
    int n;
    int ball_position = 1;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        if (ball_position == a) {
            ball_position = b;
        }

        else if (ball_position == b) {
            ball_position = a;
        }
    }

    printf("%d\n", ball_position);

    return 0;
}
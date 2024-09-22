#include <stdio.h>

int main() {
    int a, b;

    while (1) {
        // 두 자연수 입력
        scanf("%d %d", &a, &b);

        // 입력이 0 0이면 종료
        if (a == 0 && b == 0) {
            break;
        }

        // 관계 판별
        if (b % a == 0) {
            printf("factor\n"); // a는 b의 약수
        }
        else if (a % b == 0) {
            printf("multiple\n"); // a는 b의 배수
        }
        else {
            printf("neither\n"); // 둘 다 아님
        }
    }

    return 0; // 프로그램 종료
}
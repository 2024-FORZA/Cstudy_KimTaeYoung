#include <stdio.h>

int main() {
    int number;

    while (1) {
        scanf("%d", &number); // 숫자 입력

        if (number == 0) {
            break; // 0 입력 시 종료
        }

        int original = number; // 원래 숫자 저장
        int reversed = 0; // 뒤집힌 숫자 초기화

        // 숫자 뒤집기
        while (number > 0) {
            reversed = reversed * 10 + (number % 10); // 뒤집기
            number /= 10; // 마지막 자리 제거
        }

        // 팰린드롬 확인
        if (original == reversed) {
            printf("yes\n"); // 팰린드롬이면 "yes"
        }
        else {
            printf("no\n"); // 아니면 "no"
        }
    }

    return 0;
}

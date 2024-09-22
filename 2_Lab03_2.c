#include <stdio.h>

int main() {
    int num1, num2, gcd, lcm;

    // 두 개의 자연수 입력
    scanf("%d %d", &num1, &num2);

    // 최대 공약수 계산
    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i; // 공약수 중 최대값 저장
        }
    }

    // 최소 공배수 계산
    lcm = (num1 * num2) / gcd; // LCM 공식

    // 결과 출력
    printf("%d\n", gcd); // 최대 공약수 출력
    printf("%d\n", lcm); // 최소 공배수 출력

    return 0; // 프로그램 종료
}
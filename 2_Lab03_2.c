#include <stdio.h>

int main() {
    int num1, num2, gcd, lcm;

    // �� ���� �ڿ��� �Է�
    scanf("%d %d", &num1, &num2);

    // �ִ� ����� ���
    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i; // ����� �� �ִ밪 ����
        }
    }

    // �ּ� ����� ���
    lcm = (num1 * num2) / gcd; // LCM ����

    // ��� ���
    printf("%d\n", gcd); // �ִ� ����� ���
    printf("%d\n", lcm); // �ּ� ����� ���

    return 0; // ���α׷� ����
}
#include <stdio.h>

int main(void) {
    int n, sum = 0;
    int digit;

    // �ټ� �ڸ� ������ �Է¹���
    scanf("%d", &n);

    // �� �ڸ����� �����Ͽ� 5������ �� �ջ�
    for (int i = 0; i < 5; i++) {
        digit = n % 10;          // ������ �ڸ����� ����
        // �ټ� ������ ���� ��� (digit * digit * digit * digit * digit)
        sum += digit * digit * digit * digit * digit;
        n /= 10;                 // ���� �ڸ����� ó���ϱ� ���� n�� 10���� ����
    }

    // ��� ���
    printf("%d\n", sum);

    return 0;
}
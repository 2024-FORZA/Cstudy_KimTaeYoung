#include <stdio.h>

int main() {
    int N, original, count = 0;
    scanf("%d", &N);

    original = N; // ������ N ����

    do {
        int tens = N / 10; // 10�� �ڸ�
        int ones = N % 10; // 1�� �ڸ�
        int sum = tens + ones; // �ڸ� �� ��

        N = (ones * 10) + (sum % 10); // ���ο� N ����
        count++; // ����Ŭ ī��Ʈ ����
    } while (N != original); // ���� N�� ������ ������ �ݺ�

    printf("%d\n", count); // ����Ŭ ���� ���
    return 0;
}
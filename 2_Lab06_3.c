#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int sequence[1000]; // �ִ� 1000���� ���ڸ� ������ �迭
    int index = 0;      // �迭�� ���� �ε���

    // ���� ����
    for (int num = 1; index < 1000; num++) {
        for (int count = 0; count < num; count++) {
            if (index < 1000) {
                sequence[index++] = num; // ���ڸ� �迭�� �߰�
            }
        }
    }

    // ���� A���� B������ �� ���
    int sum = 0;
    for (int i = A - 1; i < B; i++) {
        sum += sequence[i]; // A���� B������ ���ڸ� ����
    }

    printf("%d\n", sum); // ��� ���
    return 0;
}

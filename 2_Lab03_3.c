#include <stdio.h>

int main() {
    int a, b;

    while (1) {
        // �� �ڿ��� �Է�
        scanf("%d %d", &a, &b);

        // �Է��� 0 0�̸� ����
        if (a == 0 && b == 0) {
            break;
        }

        // ���� �Ǻ�
        if (b % a == 0) {
            printf("factor\n"); // a�� b�� ���
        }
        else if (a % b == 0) {
            printf("multiple\n"); // a�� b�� ���
        }
        else {
            printf("neither\n"); // �� �� �ƴ�
        }
    }

    return 0; // ���α׷� ����
}
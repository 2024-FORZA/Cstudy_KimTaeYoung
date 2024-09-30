#include <stdio.h>

int main() {
    int number;

    while (1) {
        scanf("%d", &number); // ���� �Է�

        if (number == 0) {
            break; // 0 �Է� �� ����
        }

        int original = number; // ���� ���� ����
        int reversed = 0; // ������ ���� �ʱ�ȭ

        // ���� ������
        while (number > 0) {
            reversed = reversed * 10 + (number % 10); // ������
            number /= 10; // ������ �ڸ� ����
        }

        // �Ӹ���� Ȯ��
        if (original == reversed) {
            printf("yes\n"); // �Ӹ�����̸� "yes"
        }
        else {
            printf("no\n"); // �ƴϸ� "no"
        }
    }

    return 0;
}

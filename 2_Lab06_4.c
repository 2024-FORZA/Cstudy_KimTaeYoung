#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    int n = 1; // �밢�� ��ȣ
    int sum = 0; // �밢�������� �м� ����

    // X�� ���Ե� �밢���� ã��
    while (sum + n < X) {
        sum += n; // ���� �밢���� �м� ���� �߰�
        n++; // ���� �밢������ �̵�
    }

    // X��° �м��� ��ġ ���
    int position = X - sum; // ���� �밢������ X������ ��ġ
    if (n % 2 == 0) {
        // ¦�� �밢�� (�Ʒ����� ����)
        printf("%d/%d\n", position, n - position + 1);
    }
    else {
        // Ȧ�� �밢�� (������ �Ʒ���)
        printf("%d/%d\n", n - position + 1, position);
    }

    return 0;
}

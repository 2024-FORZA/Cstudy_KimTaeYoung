#include <stdio.h>

int main() {
    int A, B, V;

    // �Է� �ޱ�
    scanf("%d %d %d", &A, &B, &V);

    // ù���� �����ϰ� �ö󰡴� �Ÿ��� V - A
    int remaining_distance = V - A;

    // �Ϸ翡 �ö󰡴� �Ÿ��� A - B
    int daily_progress = A - B;

    // �ϼ� ���
    // �ø� ó��: (remaining_distance + daily_progress - 1) / daily_progress
    int days = (remaining_distance + daily_progress - 1) / daily_progress + 1;

    // ��� ���
    printf("%d\n", days);

    return 0;
}
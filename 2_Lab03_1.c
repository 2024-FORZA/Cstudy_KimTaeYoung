#include <stdio.h>

int main() {
    int N; // �մ��� ��
    int seats[101] = { 0 }; // 1������ 100�� �ڸ� (0: �������, 1: �� ����)
    int rejected_count = 0; // �������� ����� ��

    // �մ��� �� �Է�
    scanf("%d", &N);

    // �� �մ��� �ɰ� �;��ϴ� �ڸ� �Է�
    for (int i = 0; i < N; i++) {
        int desired_seat;
        scanf("%d", &desired_seat);

        // ���ϴ� �ڸ��� ����� �ִ��� Ȯ��
        if (seats[desired_seat] == 0) {
            // �ڸ��� ��������� ����
            seats[desired_seat] = 1; // �ڸ��� ������
        }
        else {
            // �ڸ��� �� ������ ����
            rejected_count++;
        }
    }

    // �������� ����� �� ���
    printf("%d\n", rejected_count);

    return 0; // ���α׷� ����
}
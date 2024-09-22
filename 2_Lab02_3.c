#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    char room[100][101]; // ���� ������ ������ �迭
    int horizontal_count = 0, vertical_count = 0;

    // ���� ���� �Է� �ޱ�
    for (int i = 0; i < N; i++) {
        scanf("%s", room[i]);
    }

    // ���� ���� �˻�
    for (int i = 0; i < N; i++) {
        int empty_space = 0; // ���ӵ� �� ������ ��
        for (int j = 0; j < N; j++) {
            if (room[i][j] == '.') {
                empty_space++; // �� ���� ����
            }
            else {
                if (empty_space >= 2) {
                    horizontal_count++; // ���η� ���� �� �ִ� �ڸ� ����
                }
                empty_space = 0; // �� ���� �ʱ�ȭ
            }
        }
        // ���� ���� �������� �� �� ���� üũ
        if (empty_space >= 2) {
            horizontal_count++;
        }
    }

    // ���� ���� �˻�
    for (int j = 0; j < N; j++) {
        int empty_space = 0; // ���ӵ� �� ������ ��
        for (int i = 0; i < N; i++) {
            if (room[i][j] == '.') {
                empty_space++; // �� ���� ����
            }
            else {
                if (empty_space >= 2) {
                    vertical_count++; // ���η� ���� �� �ִ� �ڸ� ����
                }
                empty_space = 0; // �� ���� �ʱ�ȭ
            }
        }
        // ���� ���� �������� �� �� ���� üũ
        if (empty_space >= 2) {
            vertical_count++;
        }
    }

    // ��� ���
    printf("%d %d\n", horizontal_count, vertical_count);

    return 0;
}
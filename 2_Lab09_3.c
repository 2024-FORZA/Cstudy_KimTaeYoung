#include <stdio.h>

int main() {
    int C;  // �׽�Ʈ ���̽��� ����
    scanf("%d", &C);  // ù ��° �Է� ��

    for (int i = 0; i < C; i++) {
        int N;  // �л��� ��
        scanf("%d", &N);  // �л� �� �Է�

        int scores[1000];  // �л� ������ ������ �迭
        int sum = 0;  // ���� �հ�

        // ���� �Է� �� �հ� ���
        for (int j = 0; j < N; j++) {
            scanf("%d", &scores[j]);
            sum += scores[j];
        }

        // ��� ���
        double average = (double)sum / N;

        // ����� ���� �л��� �� ���
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (scores[j] > average) {
                count++;
            }
        }

        // ���� ���
        double ratio = (double)count / N * 100;

        // ��� ��� (�Ҽ��� ��° �ڸ����� �ݿø�)
        printf("%.3f%%\n", ratio);
    }

    return 0;
}
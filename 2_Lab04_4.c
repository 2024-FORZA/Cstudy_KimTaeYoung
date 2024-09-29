#include <stdio.h>

int main() {
    int N; // ���� ��
    scanf("%d", &N); // ���� �� �Է�

    int scores[N]; // ������ ������ �迭
    int maxScore = 0; // �ְ� ����

    // ���� �Է�
    for (int i = 0; i < N; i++) {
        scanf("%d", &scores[i]);
        if (scores[i] > maxScore) {
            maxScore = scores[i]; // �ְ� ���� ã��
        }
    }

    // ���ο� ��� ���
    double total = 0; // ������ ��
    for (int i = 0; i < N; i++) {
        total += (double)scores[i] / maxScore * 100; // ���� ����
    }

    double newAverage = total / N; // ���ο� ���
    printf("%.2f\n", newAverage); // ���ο� ��� ���

    return 0;
}

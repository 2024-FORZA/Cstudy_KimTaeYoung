#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M); // ī���� ���� N�� ��ǥ �� M �Է�

    int cards[100]; // ī�� ���� ������ �迭
    for (int i = 0; i < N; i++) {
        scanf("%d", &cards[i]); // ī���� ���� �Է¹���
    }

    int closest_sum = 0; // M�� ���� ����� ī�� ��

    // 3���� ī�带 �����ϴ� ��� ������ �˻�
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                int sum = cards[i] + cards[j] + cards[k]; // 3���� ī�� ��
                // ���� M�� ���� �ʰ�, ���� ���� ����� �պ��� ũ�� ������Ʈ
                if (sum <= M && sum > closest_sum) {
                    closest_sum = sum; // ���� ����� �� ������Ʈ
                }
            }
        }
    }

    printf("%d\n", closest_sum); // ��� ���
    return 0;
}

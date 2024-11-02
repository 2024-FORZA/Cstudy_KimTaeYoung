#include <stdio.h>

int main() {
    int N, Q;

    // �Ǻ� �� N�� ������ ���� Q �Է�
    scanf("%d %d", &N, &Q);

    int B[100];  // �� �Ǻ��� �ð��� ������ �迭
    int cumulative_time[101] = { 0 }; // ���� �ð��� ������ �迭

    // �� �Ǻ��� �ð��� �Է¹ް� ���� �ð� ���
    for (int i = 0; i < N; i++) {
        scanf("%d", &B[i]);
        cumulative_time[i + 1] = cumulative_time[i] + B[i]; // ���� �ð� ���
    }

    // �� ������ ���� �ش� �ð��� � �Ǻ��� �θ��� �ִ��� Ȯ��
    for (int i = 0; i < Q; i++) {
        int T;
        scanf("%d", &T);

        // T�� ���� �ð� �迭���� � �Ǻ��� �ش��ϴ��� ã��
        for (int j = 0; j < N; j++) {
            if (T < cumulative_time[j + 1]) {
                printf("%d\n", j + 1); // �Ǻ� ��ȣ�� 1���� �����ϹǷ� j + 1
                break;
            }
        }
    }

    return 0;
}

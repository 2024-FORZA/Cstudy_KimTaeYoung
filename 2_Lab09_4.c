#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    // �ٱ��� �迭 �ʱ�ȭ (1������ N������)
    int baskets[N];
    for (int i = 0; i < N; i++) {
        baskets[i] = i + 1;
    }

    // M���� �ٲٱ� �۾� ó��
    for (int k = 0; k < M; k++) {
        int i, j;
        scanf("%d %d", &i, &j);

        // 1-based index�� 0-based index�� ����
        i--; // 1���� �����ϴ� �ε����� 0���� �����ϴ� �ε����� ��ȯ
        j--; // ���������� 1-based -> 0-based

        // ���� [i, j]�� �迭�� �������� �ٲ��ش�.
        while (i < j) {
            int temp = baskets[i];
            baskets[i] = baskets[j];
            baskets[j] = temp;
            i++;
            j--;
        }
    }

    // ��� ���
    for (int i = 0; i < N; i++) {
        printf("%d ", baskets[i]);
    }
    printf("\n");

    return 0;
}

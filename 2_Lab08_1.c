#include <stdio.h>
#include <stdlib.h>

// �� �Լ� (�������� ������ ���� �Լ�)
int compare(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int N, k;

    // ù ��° �� �Է� �ޱ�
    scanf("%d %d", &N, &k);

    int scores[N];

    // �� ��° �� ���� �Է� �ޱ�
    for (int i = 0; i < N; i++) {
        scanf("%d", &scores[i]);
    }

    // ������ ������������ ����
    qsort(scores, N, sizeof(int), compare);

    // ĿƮ���� ���� ��� (k��° ����)
    printf("%d\n", scores[k - 1]);

    return 0;
}

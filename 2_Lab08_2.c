#include <stdio.h>
#include <stdlib.h>

// �� �Լ� (���� ����: x��ǥ ��������, x��ǥ ������ y��ǥ ��������)
int compare(const void* a, const void* b) {
    // (a�� b�� ���� (x, y) ���·� ����� ����ü ������)
    int x1 = ((int*)a)[0], y1 = ((int*)a)[1];
    int x2 = ((int*)b)[0], y2 = ((int*)b)[1];

    if (x1 == x2) {
        // x��ǥ�� ������ y��ǥ�� ��
        return y1 - y2;
    }
    else {
        // x��ǥ�� �ٸ��� x��ǥ�� ��
        return x1 - x2;
    }
}

int main() {
    int N;

    // ���� ���� �Է�
    scanf("%d", &N);

    int points[N][2];

    // ���� �Է�
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &points[i][0], &points[i][1]);
    }

    // qsort�� ����Ͽ� ���� ����
    qsort(points, N, sizeof(points[0]), compare);

    // ���ĵ� ��� ���
    for (int i = 0; i < N; i++) {
        printf("%d %d\n", points[i][0], points[i][1]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int L, P, V;
    int case_num = 1;

    while (1) {
        // �Է� �ޱ�
        scanf("%d %d %d", &L, &P, &V);

        // ���� ����
        if (L == 0 && P == 0 && V == 0) {
            break;
        }

        // ����� �� �ִ� �ϼ� ���
        int total_days = (V / P) * L + (V % P < L ? V % P : L);

        // ��� ���
        printf("Case %d: %d\n", case_num++, total_days);
    }

    return 0;
}
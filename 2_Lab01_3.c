#include <stdio.h>

int main(void) {
    int N;
    long long factorial = 1; // ū ���� �����ϱ� ���� long long ���

    // �Է� �ޱ�
    scanf("%d", &N);

    // N! ���
    for (int i = 1; i <= N; i++) {
        factorial *= i; // �� ���ڸ� ���ϱ�
    }

    // ��� ���
    printf("%lld\n", factorial);

    return 0;
}
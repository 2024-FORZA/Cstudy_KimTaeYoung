#include <stdio.h>

int main() {
    long long N; // �ִ� �Է°��� ����Ͽ� long long ���
    scanf("%lld", &N);

    long long time = 0;
    long long current_birds = N;
    long long K = 1;

    while (current_birds > 0) {
        if (current_birds >= K) {
            current_birds -= K; // K ������ ���� ���ư�
            time++; // �ð� ����
            K++; // K�� 1 ����
        }
        else {
            K = 1; // K�� 1�� �ʱ�ȭ
        }
    }

    printf("%lld\n", time); // ��� ���
    return 0;
}
#include <stdio.h>

int main(void)
{
    int n;
    int num;
    int cnt[10001] = { 0 }; // �迭 ũ�⸦ 10001�� �����Ͽ� 0~10000 ������ ���� ó��

    scanf("%d", &n);

    // �Է� ó�� �� ī��Ʈ
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        cnt[num]++;
    }

    // ���ĵ� ���
    for (int i = 0; i <= 10000; i++) {
        if (cnt[i] != 0) {
            for (int j = 0; j < cnt[i]; j++) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
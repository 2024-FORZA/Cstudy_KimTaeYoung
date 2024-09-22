#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, min_difficulty = 5, min_index = -1;

    // ������ ���� �Է¹ޱ�
    scanf("%d", &n);

    // ���� ����� ���̵��� ������ �迭
    char titles[4][11];  // �ִ� 4���� ����, �� ���� ������ �ִ� 10����
    int difficulties[4]; // �� ������ ���̵�

    // �� ������ ����� ���̵��� �Է¹���
    for (i = 0; i < n; i++) {
        // ���� ����� ���̵� �Է�
        scanf("%s %d", titles[i], &difficulties[i]);

        // �ּ� ���̵��� ã��
        if (difficulties[i] < min_difficulty) {
            min_difficulty = difficulties[i];
            min_index = i;
        }
    }

    // ���� ���� ������ ������ ���
    printf("%s\n", titles[min_index]);

    return 0;
}
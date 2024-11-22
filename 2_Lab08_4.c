#include <stdio.h>
#include <stdlib.h>

int main() {
    int classCount, mainT, serveT;
    long long count = 0;  // �� ������ ���� ������ ����

    // ������ �� �Է�
    scanf("%d", &classCount);

    // �����忡 �ִ� ������ �� �迭
    int* people = (int*)malloc(sizeof(int) * classCount);

    // �� �����忡 �ִ� ������ �� �Է�
    for (int i = 0; i < classCount; i++) {
        scanf("%d", &people[i]);
    }

    // �Ѱ������� �ΰ������� ������ �� �ִ� ������ �� �Է�
    scanf("%d %d", &mainT, &serveT);

    // �� �����忡�� �ʿ��� ������ �� ���
    for (int i = 0; i < classCount; i++) {
        int remain = people[i] - mainT;  // �Ѱ������� ������ �� �ִ� ���� ���� ���� ������ ��

        // ù ��°, �Ѱ����� 1�� ��ġ
        count++;

        // �ΰ������� �ʿ��� ���
        if (remain > 0) {
            // �ΰ����� �� ��� (�ø� ó��)
            count += (remain + serveT - 1) / serveT;
        }
    }

    // ���� �޸� ����
    free(people);

    // ��� ���
    printf("%lld\n", count);

    return 0;
}
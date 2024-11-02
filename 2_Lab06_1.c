#include <stdio.h>

// N�� ����� ���� ���� �ʿ��� �ּ� �� ������ ����ϴ� �Լ�
int min_rooms_to_reach(int N) {
    // N�� 1�� ���, ���� 1�� �������� ������ ��ȯ
    if (N == 1) {
        return 1;
    }

    int layer = 0;  // ���� �� ��ȣ
    int last_room_in_layer = 1;  // ���� ���� ������ �� ��ȣ

    // N�� ���� ���� ������ �� ��ȣ���� ���� ������ �ݺ�
    while (last_room_in_layer < N) {
        layer++;  // �� ��ȣ ����
        last_room_in_layer += 6 * layer;  // ���� ���� ������ �� ��ȣ ������Ʈ
    }

    // N�� ���Ե� ���� ��ȣ�� 1�� ���Ͽ� ��ȯ
    return layer + 1;
}

int main() {
    int N;  // �� ��ȣ ����
    // ����ڷκ��� �� ��ȣ N�� �Է¹���
    scanf("%d", &N);

    // N�� ����� ���� ���� �ʿ��� �� ������ ���
    printf("%d\n", min_rooms_to_reach(N));

    return 0;  // ���α׷� ����
}

#include <stdio.h>

int main() {
    int N, M;

    // �ڽ��� ���� N, å�� ���� M �Է�
    scanf("%d %d", &N, &M);

    int A[N]; // �ڽ� �뷮
    int B[M]; // å ũ��
    int box_fill[N]; // �� �ڽ��� ä���� å�� ũ�� ��

    // �ڽ� �뷮 �Է�
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        box_fill[i] = 0; // �� �ڽ��� �ʱ� ä���� ũ�� 0���� �ʱ�ȭ
    }

    // å ũ�� �Է�
    for (int j = 0; j < M; j++) {
        scanf("%d", &B[j]);
    }

    // ���� �ڽ��� å�� �ε���
    int box_index = 0;
    int book_index = 0;

    // ��� å�� �ڽ��� �ֱ�
    while (book_index < M) {
        // ���� �ڽ� �뷮�� ���� å ũ��
        int current_capacity = A[box_index];
        int current_book_size = B[book_index];

        // å�� ���� �ڽ��� ���� �� �ִ��� Ȯ��
        if (box_fill[box_index] + current_book_size <= current_capacity) {
            box_fill[box_index] += current_book_size; // å�� ����
            book_index++; // ���� å���� �̵�
        }
        else {
            box_index++; // ���� �ڽ��� �̵�
        }
    }

    // ����� �뷮 ���
    int total_waste = 0;
    for (int i = 0; i < N; i++) {
        total_waste += (A[i] - box_fill[i]); // �ڽ� �뷮 - ä���� ũ��
    }

    // ��� ���
    printf("%d\n", total_waste);

    return 0;
}
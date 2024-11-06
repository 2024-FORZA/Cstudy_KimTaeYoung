#include <stdio.h>

int main() {
    int K;
    scanf("%d", &K);  // ù ��° �ٿ� ���� K �Է�

    int stack[100000];  // ���� ������ ����
    int top = -1;  // ������ top ������ �ʱ�ȭ

    for (int i = 0; i < K; i++) {
        int num;
        scanf("%d", &num);  // ���� ���� �Է�

        if (num == 0) {
            // 0�� ������ ���� �ֱ��� ���� ����
            top--;
        }
        else {
            // 0�� �ƴϸ� ���� ���ÿ� �߰�
            stack[++top] = num;
        }
    }

    // ���ÿ� ���� �ִ� ������ �� ���ϱ�
    int sum = 0;
    for (int i = 0; i <= top; i++) {
        sum += stack[i];
    }

    printf("%d\n", sum);  // ���� �� ���

    return 0;
}

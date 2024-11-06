#include <stdio.h>
#include <string.h>

int main(void) {
    int N;
    scanf("%d", &N);  // �׽�Ʈ ���̽� �� �Է�

    for (int i = 0; i < N; i++) {
        char A[51];
        scanf("%s", A);  // ��ȣ ���ڿ� �Է�

        int top = -1;  // ���� �ʱ�ȭ
        int isValid = 1;  // ��ȣ ���ڿ��� ��ȿ���� üũ�ϴ� ����

        for (int j = 0; A[j] != '\0'; j++) {
            if (A[j] == '(') {
                top++;  // ���� ��ȣ�� ���ÿ� �ֱ�
            }
            else if (A[j] == ')') {
                if (top == -1) {  // ������ ��� ������ �ùٸ��� ���� ��ȣ
                    isValid = 0;
                    break;
                }
                top--;  // ���� ��ȣ�� ���ÿ��� �ϳ� ������
            }
        }

        // ���������� ���ÿ� ���� ��ȣ�� ���� ������ ��ȿ���� ����
        if (top != -1) {
            isValid = 0;
        }

        // ��� ���
        if (isValid) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}

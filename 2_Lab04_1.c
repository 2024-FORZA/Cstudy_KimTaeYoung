#include <stdio.h>
#include <string.h>

int main() {
    char line[81]; // �ִ� 80���� + null terminator

    while (1) {
        fgets(line, sizeof(line), stdin); // �� �� �Է� �ޱ�

        // �Է��� ���� "***"���� Ȯ��
        if (strcmp(line, "***\n") == 0) {
            break; // ����
        }

        int len = strlen(line);
        // ���� ���� ����
        if (line[len - 1] == '\n') {
            line[len - 1] = '\0';
            len--; // ���ڿ� ���� ����
        }

        // ���ڿ��� �������� ���
        for (int i = len - 1; i >= 0; i--) {
            putchar(line[i]);
        }
        putchar('\n'); // �� �ٲ�
    }

    return 0;
}
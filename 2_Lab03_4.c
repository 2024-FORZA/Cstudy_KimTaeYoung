#include <stdio.h>

void Bubblesort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < (n - i - 1); j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    int sum = 0;
    int array[9];

    // ��ȩ �������� Ű �Է�
    for (int i = 0; i < 9; i++) {
        scanf("%d", &array[i]);
        sum += array[i]; // ���� ���
    }

    // 2���� �����̸� ã�Ƽ� 0���� ����
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - (array[i] + array[j]) == 100) {
                array[i] = 0; // �ش� ������ 0���� ����
                array[j] = 0; // �ش� ������ 0���� ����
                break; // �ߺ� ������ ���� ���� Ż��
            }
        }
        if (array[i] == 0) break; // ã�� ��� ���� Ż��
    }

    // ���ĵ� ��� ���
    Bubblesort(array, 9); // �迭�� ũ�⸦ 9�� ����

    // 0�� �ƴ� �������� Ű ���
    for (int i = 0; i < 9; i++) {
        if (array[i] != 0) {
            printf("%d\n", array[i]);
        }
    }

    return 0;
}
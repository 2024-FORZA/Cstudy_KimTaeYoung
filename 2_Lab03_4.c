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

    // 아홉 난쟁이의 키 입력
    for (int i = 0; i < 9; i++) {
        scanf("%d", &array[i]);
        sum += array[i]; // 총합 계산
    }

    // 2명의 난쟁이를 찾아서 0으로 설정
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - (array[i] + array[j]) == 100) {
                array[i] = 0; // 해당 난쟁이 0으로 설정
                array[j] = 0; // 해당 난쟁이 0으로 설정
                break; // 중복 방지를 위해 루프 탈출
            }
        }
        if (array[i] == 0) break; // 찾은 경우 루프 탈출
    }

    // 정렬된 결과 출력
    Bubblesort(array, 9); // 배열의 크기를 9로 설정

    // 0이 아닌 난쟁이의 키 출력
    for (int i = 0; i < 9; i++) {
        if (array[i] != 0) {
            printf("%d\n", array[i]);
        }
    }

    return 0;
}
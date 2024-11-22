#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    // 바구니 배열 초기화 (1번부터 N번까지)
    int baskets[N];
    for (int i = 0; i < N; i++) {
        baskets[i] = i + 1;
    }

    // M번의 바꾸기 작업 처리
    for (int k = 0; k < M; k++) {
        int i, j;
        scanf("%d %d", &i, &j);

        // 1-based index를 0-based index로 변경
        i--; // 1부터 시작하는 인덱스를 0부터 시작하는 인덱스로 변환
        j--; // 마찬가지로 1-based -> 0-based

        // 범위 [i, j]의 배열을 역순으로 바꿔준다.
        while (i < j) {
            int temp = baskets[i];
            baskets[i] = baskets[j];
            baskets[j] = temp;
            i++;
            j--;
        }
    }

    // 결과 출력
    for (int i = 0; i < N; i++) {
        printf("%d ", baskets[i]);
    }
    printf("\n");

    return 0;
}

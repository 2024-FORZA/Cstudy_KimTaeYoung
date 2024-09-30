#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M); // 카드의 개수 N과 목표 값 M 입력

    int cards[100]; // 카드 값을 저장할 배열
    for (int i = 0; i < N; i++) {
        scanf("%d", &cards[i]); // 카드의 값을 입력받음
    }

    int closest_sum = 0; // M에 가장 가까운 카드 합

    // 3장의 카드를 선택하는 모든 조합을 검사
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                int sum = cards[i] + cards[j] + cards[k]; // 3장의 카드 합
                // 합이 M을 넘지 않고, 현재 가장 가까운 합보다 크면 업데이트
                if (sum <= M && sum > closest_sum) {
                    closest_sum = sum; // 가장 가까운 합 업데이트
                }
            }
        }
    }

    printf("%d\n", closest_sum); // 결과 출력
    return 0;
}

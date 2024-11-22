#include <stdio.h>
#include <stdlib.h>

// 비교 함수 (내림차순 정렬을 위한 함수)
int compare(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int N, k;

    // 첫 번째 줄 입력 받기
    scanf("%d %d", &N, &k);

    int scores[N];

    // 두 번째 줄 점수 입력 받기
    for (int i = 0; i < N; i++) {
        scanf("%d", &scores[i]);
    }

    // 점수를 내림차순으로 정렬
    qsort(scores, N, sizeof(int), compare);

    // 커트라인 점수 출력 (k번째 점수)
    printf("%d\n", scores[k - 1]);

    return 0;
}

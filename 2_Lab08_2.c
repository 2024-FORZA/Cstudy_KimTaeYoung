#include <stdio.h>
#include <stdlib.h>

// 비교 함수 (정렬 기준: x좌표 오름차순, x좌표 같으면 y좌표 오름차순)
int compare(const void* a, const void* b) {
    // (a와 b는 각각 (x, y) 형태로 저장된 구조체 포인터)
    int x1 = ((int*)a)[0], y1 = ((int*)a)[1];
    int x2 = ((int*)b)[0], y2 = ((int*)b)[1];

    if (x1 == x2) {
        // x좌표가 같으면 y좌표로 비교
        return y1 - y2;
    }
    else {
        // x좌표가 다르면 x좌표로 비교
        return x1 - x2;
    }
}

int main() {
    int N;

    // 점의 개수 입력
    scanf("%d", &N);

    int points[N][2];

    // 점들 입력
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &points[i][0], &points[i][1]);
    }

    // qsort를 사용하여 점들 정렬
    qsort(points, N, sizeof(points[0]), compare);

    // 정렬된 결과 출력
    for (int i = 0; i < N; i++) {
        printf("%d %d\n", points[i][0], points[i][1]);
    }

    return 0;
}

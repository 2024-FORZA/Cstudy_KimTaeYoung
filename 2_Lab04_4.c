#include <stdio.h>

int main() {
    int N; // 과목 수
    scanf("%d", &N); // 과목 수 입력

    int scores[N]; // 점수를 저장할 배열
    int maxScore = 0; // 최고 점수

    // 점수 입력
    for (int i = 0; i < N; i++) {
        scanf("%d", &scores[i]);
        if (scores[i] > maxScore) {
            maxScore = scores[i]; // 최고 점수 찾기
        }
    }

    // 새로운 평균 계산
    double total = 0; // 점수의 합
    for (int i = 0; i < N; i++) {
        total += (double)scores[i] / maxScore * 100; // 점수 조작
    }

    double newAverage = total / N; // 새로운 평균
    printf("%.2f\n", newAverage); // 새로운 평균 출력

    return 0;
}

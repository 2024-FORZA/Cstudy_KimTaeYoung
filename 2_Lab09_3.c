#include <stdio.h>

int main() {
    int C;  // 테스트 케이스의 개수
    scanf("%d", &C);  // 첫 번째 입력 값

    for (int i = 0; i < C; i++) {
        int N;  // 학생의 수
        scanf("%d", &N);  // 학생 수 입력

        int scores[1000];  // 학생 점수를 저장할 배열
        int sum = 0;  // 점수 합계

        // 점수 입력 및 합계 계산
        for (int j = 0; j < N; j++) {
            scanf("%d", &scores[j]);
            sum += scores[j];
        }

        // 평균 계산
        double average = (double)sum / N;

        // 평균을 넘은 학생의 수 계산
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (scores[j] > average) {
                count++;
            }
        }

        // 비율 계산
        double ratio = (double)count / N * 100;

        // 결과 출력 (소수점 셋째 자리까지 반올림)
        printf("%.3f%%\n", ratio);
    }

    return 0;
}
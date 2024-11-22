#include <stdio.h>
#include <stdlib.h>

int main() {
    int classCount, mainT, serveT;
    long long count = 0;  // 총 감독관 수를 누적할 변수

    // 시험장 수 입력
    scanf("%d", &classCount);

    // 시험장에 있는 응시자 수 배열
    int* people = (int*)malloc(sizeof(int) * classCount);

    // 각 시험장에 있는 응시자 수 입력
    for (int i = 0; i < classCount; i++) {
        scanf("%d", &people[i]);
    }

    // 총감독관과 부감독관이 감시할 수 있는 응시자 수 입력
    scanf("%d %d", &mainT, &serveT);

    // 각 시험장에서 필요한 감독관 수 계산
    for (int i = 0; i < classCount; i++) {
        int remain = people[i] - mainT;  // 총감독관이 감시할 수 있는 수를 빼고 남은 응시자 수

        // 첫 번째, 총감독관 1명 배치
        count++;

        // 부감독관이 필요한 경우
        if (remain > 0) {
            // 부감독관 수 계산 (올림 처리)
            count += (remain + serveT - 1) / serveT;
        }
    }

    // 동적 메모리 해제
    free(people);

    // 결과 출력
    printf("%lld\n", count);

    return 0;
}
#include <stdio.h>

int main() {
    int L, P, V;
    int case_num = 1;

    while (1) {
        // 입력 받기
        scanf("%d %d %d", &L, &P, &V);

        // 종료 조건
        if (L == 0 && P == 0 && V == 0) {
            break;
        }

        // 사용할 수 있는 일수 계산
        int total_days = (V / P) * L + (V % P < L ? V % P : L);

        // 결과 출력
        printf("Case %d: %d\n", case_num++, total_days);
    }

    return 0;
}
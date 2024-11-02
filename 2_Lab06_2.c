#include <stdio.h>

int main() {
    int N, Q;

    // 악보 수 N과 질문의 개수 Q 입력
    scanf("%d %d", &N, &Q);

    int B[100];  // 각 악보의 시간을 저장할 배열
    int cumulative_time[101] = { 0 }; // 누적 시간을 저장할 배열

    // 각 악보의 시간을 입력받고 누적 시간 계산
    for (int i = 0; i < N; i++) {
        scanf("%d", &B[i]);
        cumulative_time[i + 1] = cumulative_time[i] + B[i]; // 누적 시간 계산
    }

    // 각 질문에 대해 해당 시간에 어떤 악보를 부르고 있는지 확인
    for (int i = 0; i < Q; i++) {
        int T;
        scanf("%d", &T);

        // T가 누적 시간 배열에서 어떤 악보에 해당하는지 찾기
        for (int j = 0; j < N; j++) {
            if (T < cumulative_time[j + 1]) {
                printf("%d\n", j + 1); // 악보 번호는 1부터 시작하므로 j + 1
                break;
            }
        }
    }

    return 0;
}

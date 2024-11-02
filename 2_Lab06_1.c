#include <stdio.h>

// N번 방까지 가기 위해 필요한 최소 방 개수를 계산하는 함수
int min_rooms_to_reach(int N) {
    // N이 1일 경우, 방을 1개 지나가는 것으로 반환
    if (N == 1) {
        return 1;
    }

    int layer = 0;  // 현재 층 번호
    int last_room_in_layer = 1;  // 현재 층의 마지막 방 번호

    // N이 현재 층의 마지막 방 번호보다 작을 때까지 반복
    while (last_room_in_layer < N) {
        layer++;  // 층 번호 증가
        last_room_in_layer += 6 * layer;  // 현재 층의 마지막 방 번호 업데이트
    }

    // N이 포함된 층의 번호에 1을 더하여 반환
    return layer + 1;
}

int main() {
    int N;  // 방 번호 변수
    // 사용자로부터 방 번호 N을 입력받음
    scanf("%d", &N);

    // N번 방까지 가기 위해 필요한 방 개수를 출력
    printf("%d\n", min_rooms_to_reach(N));

    return 0;  // 프로그램 종료
}

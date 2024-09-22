#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    char room[100][101]; // 방의 구조를 저장할 배열
    int horizontal_count = 0, vertical_count = 0;

    // 방의 구조 입력 받기
    for (int i = 0; i < N; i++) {
        scanf("%s", room[i]);
    }

    // 가로 방향 검사
    for (int i = 0; i < N; i++) {
        int empty_space = 0; // 연속된 빈 공간의 수
        for (int j = 0; j < N; j++) {
            if (room[i][j] == '.') {
                empty_space++; // 빈 공간 증가
            }
            else {
                if (empty_space >= 2) {
                    horizontal_count++; // 가로로 누울 수 있는 자리 증가
                }
                empty_space = 0; // 빈 공간 초기화
            }
        }
        // 행의 끝에 도달했을 때 빈 공간 체크
        if (empty_space >= 2) {
            horizontal_count++;
        }
    }

    // 세로 방향 검사
    for (int j = 0; j < N; j++) {
        int empty_space = 0; // 연속된 빈 공간의 수
        for (int i = 0; i < N; i++) {
            if (room[i][j] == '.') {
                empty_space++; // 빈 공간 증가
            }
            else {
                if (empty_space >= 2) {
                    vertical_count++; // 세로로 누울 수 있는 자리 증가
                }
                empty_space = 0; // 빈 공간 초기화
            }
        }
        // 열의 끝에 도달했을 때 빈 공간 체크
        if (empty_space >= 2) {
            vertical_count++;
        }
    }

    // 결과 출력
    printf("%d %d\n", horizontal_count, vertical_count);

    return 0;
}
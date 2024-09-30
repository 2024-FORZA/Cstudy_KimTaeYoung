#include <stdio.h>

int main() {
    int N, M;

    // 박스의 개수 N, 책의 개수 M 입력
    scanf("%d %d", &N, &M);

    int A[N]; // 박스 용량
    int B[M]; // 책 크기
    int box_fill[N]; // 각 박스에 채워진 책의 크기 합

    // 박스 용량 입력
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        box_fill[i] = 0; // 각 박스의 초기 채워진 크기 0으로 초기화
    }

    // 책 크기 입력
    for (int j = 0; j < M; j++) {
        scanf("%d", &B[j]);
    }

    // 현재 박스와 책의 인덱스
    int box_index = 0;
    int book_index = 0;

    // 모든 책을 박스에 넣기
    while (book_index < M) {
        // 현재 박스 용량과 현재 책 크기
        int current_capacity = A[box_index];
        int current_book_size = B[book_index];

        // 책을 현재 박스에 넣을 수 있는지 확인
        if (box_fill[box_index] + current_book_size <= current_capacity) {
            box_fill[box_index] += current_book_size; // 책을 넣음
            book_index++; // 다음 책으로 이동
        }
        else {
            box_index++; // 다음 박스로 이동
        }
    }

    // 낭비된 용량 계산
    int total_waste = 0;
    for (int i = 0; i < N; i++) {
        total_waste += (A[i] - box_fill[i]); // 박스 용량 - 채워진 크기
    }

    // 결과 출력
    printf("%d\n", total_waste);

    return 0;
}
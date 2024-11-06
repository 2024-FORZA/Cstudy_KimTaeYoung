#include <stdio.h>

int main() {
    int K;
    scanf("%d", &K);  // 첫 번째 줄에 정수 K 입력

    int stack[100000];  // 수를 저장할 스택
    int top = -1;  // 스택의 top 포인터 초기화

    for (int i = 0; i < K; i++) {
        int num;
        scanf("%d", &num);  // 다음 숫자 입력

        if (num == 0) {
            // 0이 들어오면 가장 최근의 수를 삭제
            top--;
        }
        else {
            // 0이 아니면 수를 스택에 추가
            stack[++top] = num;
        }
    }

    // 스택에 남아 있는 값들의 합 구하기
    int sum = 0;
    for (int i = 0; i <= top; i++) {
        sum += stack[i];
    }

    printf("%d\n", sum);  // 최종 합 출력

    return 0;
}

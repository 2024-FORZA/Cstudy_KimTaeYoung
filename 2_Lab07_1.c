#include <stdio.h>
#include <string.h>

int main(void) {
    int N;
    scanf("%d", &N);  // 테스트 케이스 수 입력

    for (int i = 0; i < N; i++) {
        char A[51];
        scanf("%s", A);  // 괄호 문자열 입력

        int top = -1;  // 스택 초기화
        int isValid = 1;  // 괄호 문자열이 유효한지 체크하는 변수

        for (int j = 0; A[j] != '\0'; j++) {
            if (A[j] == '(') {
                top++;  // 열린 괄호는 스택에 넣기
            }
            else if (A[j] == ')') {
                if (top == -1) {  // 스택이 비어 있으면 올바르지 않은 괄호
                    isValid = 0;
                    break;
                }
                top--;  // 닫힌 괄호는 스택에서 하나 꺼내기
            }
        }

        // 최종적으로 스택에 열린 괄호가 남아 있으면 유효하지 않음
        if (top != -1) {
            isValid = 0;
        }

        // 결과 출력
        if (isValid) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char line[81]; // 최대 80글자 + null terminator

    while (1) {
        fgets(line, sizeof(line), stdin); // 한 줄 입력 받기

        // 입력의 끝이 "***"인지 확인
        if (strcmp(line, "***\n") == 0) {
            break; // 종료
        }

        int len = strlen(line);
        // 개행 문자 제거
        if (line[len - 1] == '\n') {
            line[len - 1] = '\0';
            len--; // 문자열 길이 조정
        }

        // 문자열을 역순으로 출력
        for (int i = len - 1; i >= 0; i--) {
            putchar(line[i]);
        }
        putchar('\n'); // 줄 바꿈
    }

    return 0;
}
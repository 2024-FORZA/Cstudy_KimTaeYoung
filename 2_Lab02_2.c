#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, min_difficulty = 5, min_index = -1;

    // 문제의 개수 입력받기
    scanf("%d", &n);

    // 문제 제목과 난이도를 저장할 배열
    char titles[4][11];  // 최대 4개의 문제, 각 문제 제목은 최대 10글자
    int difficulties[4]; // 각 문제의 난이도

    // 각 문제의 제목과 난이도를 입력받음
    for (i = 0; i < n; i++) {
        // 문제 제목과 난이도 입력
        scanf("%s %d", titles[i], &difficulties[i]);

        // 최소 난이도를 찾음
        if (difficulties[i] < min_difficulty) {
            min_difficulty = difficulties[i];
            min_index = i;
        }
    }

    // 가장 쉬운 문제의 제목을 출력
    printf("%s\n", titles[min_index]);

    return 0;
}
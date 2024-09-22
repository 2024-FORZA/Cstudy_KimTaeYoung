#include <stdio.h>

int main(void)
{
    int n;
    int num;
    int cnt[10001] = { 0 }; // 배열 크기를 10001로 설정하여 0~10000 범위의 숫자 처리

    scanf("%d", &n);

    // 입력 처리 및 카운트
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        cnt[num]++;
    }

    // 정렬된 출력
    for (int i = 0; i <= 10000; i++) {
        if (cnt[i] != 0) {
            for (int j = 0; j < cnt[i]; j++) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
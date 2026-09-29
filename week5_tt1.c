#include <stdio.h>

int main() {
    int dice;
    int count[7] = {0};

    while (1) {
        printf("주사위 숫자를 입력하세요 (1~6, 종료는 0): ");
        scanf("%d", &dice);

        if (dice == 0)
            break;

        if (dice >= 1 && dice <= 6) {
            count[dice]++;
        }
        else {
            printf("1부터 6까지의 숫자를 입력하세요.\n");
        }
    }

    printf("\n--- 주사위 숫자 결과 ---\n");

    for (int i = 1; i <= 6; i++) {
        printf("%d: %d번\n", i, count[i]);
    }

    return 0;
}
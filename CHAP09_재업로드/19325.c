#include <stdio.h>

int main() {
    int count[7] = {0};
    int input;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &input);
        count[input]++;
    }

    for (int i = 1; i <= 6; i++) {
        printf("%d : %d\n", i, count[i]);
    }

    return 0;
}
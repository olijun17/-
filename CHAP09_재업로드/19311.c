#include <stdio.h>

int main() {
    int count[11] = {0};
    int input;

    while (1) {
        scanf("%d", &input);
        if (input < 1 || input > 10) {
            break;
        }
        count[input]++;
    }

    for (int i = 1; i <= 10; i++) {
        if (count[i] > 0) {
            printf("%d : %d\n", i, count[i]);
        }
    }

    return 0;
}
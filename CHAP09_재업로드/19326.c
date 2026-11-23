#include <stdio.h>

int main() {
    int count[11] = {0};
    int input;

    while (1) {
        scanf("%d", &input);
        if (input == 0) {
            break;
        }
        count[input / 10]++;
    }

    for (int i = 10; i >= 0; i--) {
        if (count[i] > 0) {
            printf("%d : %d\n", i * 10, count[i]);
        }
    }

    return 0;
}
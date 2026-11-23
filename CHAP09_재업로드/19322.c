#include <stdio.h>

int main() {
    int scores[5][4];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &scores[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += scores[i][j];
        }
        double avg = (double)sum / 4.0;
        printf("%d %.1f\n", sum, avg);
    }

    return 0;
}
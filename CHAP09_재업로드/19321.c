#include <stdio.h>

int main() {
    int scores[3][3];
    int sub_totals[3] = {0};
    int grand_total = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &scores[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        int student_total = 0;
        for (int j = 0; j < 3; j++) {
            printf("%d ", scores[i][j]);
            student_total += scores[i][j];
            sub_totals[j] += scores[i][j];
            grand_total += scores[i][j];
        }
        printf("%d\n", student_total);
    }

    for (int j = 0; j < 3; j++) {
        printf("%d ", sub_totals[j]);
    }
    printf("%d\n", grand_total);

    return 0;
}
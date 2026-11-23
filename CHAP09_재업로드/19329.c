#include <stdio.h>

int main() {
    int arr[4][3];
    int total = 0;

    for (int i = 0; i < 4; i++) {
        int row_sum = 0;
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
            row_sum += arr[i][j];
        }
        printf("%d\n", row_sum);
        total += row_sum;
    }
    printf("%d\n", total);

    return 0;
}
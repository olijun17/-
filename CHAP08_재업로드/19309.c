#include <stdio.h>

int main() {
    int arr[100];
    int n = 0;
    int input;

    while (n < 100) {
        scanf("%d", &input);
        if (input == 0) {
            break;
        }
        arr[n] = input;
        n++;
    }

    int count = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 5 == 0) {
            count++;
            sum += arr[i];
        }
    }

    double avg = 0.0;
    if (count > 0) {
        avg = (double)sum / count;
    }

    printf("Multiples of 5 : %d\n", count);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}
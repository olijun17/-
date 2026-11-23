#include <stdio.h>

int main() {
    int arr[100];
    int count = 0;
    int input;

    while (count < 100) {
        scanf("%d", &input);
        if (input == 0) {
            break;
        }
        arr[count] = input;
        count++;
    }

    printf("%d\n", count);

    for (int i = 0; i < count; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d", arr[i] * 2);
        } else {
            printf("%d", arr[i] / 2);
        }
        if (i < count - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
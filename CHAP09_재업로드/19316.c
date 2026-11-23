#include <stdio.h>

int main() {
    int arr[100];
    scanf("%d", &arr[1]);
    arr[0] = 100;
    
    int i = 1;
    while (1) {
        arr[i + 1] = arr[i - 1] - arr[i];
        i++;
        if (arr[i] < 0) {
            break;
        }
    }
    
    for (int j = 0; j <= i; j++) {
        printf("%d", arr[j]);
        if (j < i) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}
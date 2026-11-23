#include <stdio.h>

int main() {

    int arr[100];
    int count = 0;
    int input;

    while(count<100) {
        scanf("%d", &input);
        if(input == 0) {
            break;
        }
        arr[count] = input;
        count++;
    }

    for(int i =1; i<count; i+=2) {
        printf("%d", arr[i]);
        if(i+2 < count) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}
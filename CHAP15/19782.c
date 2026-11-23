#include <stdio.h>

struct Person {
    char name[21];
    int height;
};

int main() {
    struct Person people[5];
    int min = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s %d", people[i].name, &people[i].height);

        if (people[i].height < people[min].height) {
            min = i;
        }
    }

    printf("%s %d\n", people[min].name, people[min].height);

    return 0;
}
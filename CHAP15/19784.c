#include <stdio.h>
#include <string.h>

struct Person {
    char name[21];
    int height;
    double weight;
};

int main() {
    struct Person people[5];
    struct Person temp;

    for (int i = 0; i < 5; i++) {
        scanf("%20s %d %lf", people[i].name, &people[i].height, &people[i].weight);
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(people[i].name, people[j].name) > 0) {
                temp = people[i];
                people[i] = people[j];
                people[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%s %d %g\n", people[i].name, people[i].height, people[i].weight);
    }

    return 0;
}
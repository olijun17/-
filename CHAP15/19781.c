    #include <stdio.h>

struct Student {
    char name[21];
    int score;
};

int main() {
    struct Student students[5];
    int max = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s %d", students[i].name, &students[i].score);

        if (students[i].score > students[max].score) {
            max = i;
        }
    }

    printf("%s %d\n", students[max].name, students[max].score);

    return 0;
}
#include <stdio.h>

typedef struct {
    char name[21];
    int s1, s2, s3;
    int total;
} Student;

void input(Student st[], int n)
{
    int i;

    for (i = 0; i < n; i++) {
        scanf("%s %d %d %d", st[i].name, &st[i].s1, &st[i].s2, &st[i].s3);
        st[i].total = st[i].s1 + st[i].s2 + st[i].s3;
    }
}

void sort(Student st[], int n)
{
    int i, j;
    Student tmp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (st[j].total > st[i].total) {
                tmp = st[i];
                st[i] = st[j];
                st[j] = tmp;
            }
        }
    }
}

void output(Student st[], int n)
{
    int i;

    for (i = 0; i < n; i++) {
        printf("%s %d %d %d %d\n", st[i].name, st[i].s1, st[i].s2, st[i].s3, st[i].total);
    }
}

int main(void)
{
    Student st[10];
    int n;

    scanf("%d", &n);

    input(st, n);
    sort(st, n);
}
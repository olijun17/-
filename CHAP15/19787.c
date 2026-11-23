#include <stdio.h>

typedef struct {
    char name[101];
    char tel[101];
    char addr[101];
} Person;

int main(void)
{
    Person p;

    scanf("%s %s %s", p.name, p.tel, p.addr);

    printf("name : %s\n", p.name);
    printf("tel : %s\n", p.tel);
    printf("addr : %s\n", p.addr);

    return 0;
}
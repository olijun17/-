#include <stdio.h>

int main() {
    double x1, y1, x2, y2;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    printf("Center point = (%.1f, %.1f)\n", (x1 + x2) / 2, (y1 + y2) / 2);

    return 0;
}
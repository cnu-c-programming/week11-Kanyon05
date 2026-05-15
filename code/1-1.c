#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

int main() {
    Point p = {1, 2};

    printf("Point: (%d, %d)\n", p.x, p.y);

    return 0;
}

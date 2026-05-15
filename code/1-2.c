#include <stdio.h>

typedef int (*BinOp(int, int));

int add (int a, int b) {
    return a + b;
}

int multiply (int a, int b) {
    return a * b;
}

int main() {
    int (*ops[2])(int, int) = {add, mul};
    BinOp ops[2] = {add, mul};

for (int i= 0; i < 2; i++) {
    printf("%d\n", ops[i](3, 4));
}

    return 0;
}

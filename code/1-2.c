#include <stdio.h>

typedef int (*BinOp)(int, int);

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    BinOp ops[2] = {add, multiply};

    for (int i = 0; i < 2; i++) {
        printf("%d\n", ops[i](3, 4));
    }

    return 0;
}

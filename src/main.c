#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "calculator.h"

int main(int argc, char argv[]) {
    if (argc < 3) {
        printf("Usage: %s <operation> <a> [b]\n", argv[0]);
        return 1;
    }

    charop = argv[1];
    int a = atoi(argv[2]);
    int result;

    if (strcmp(op, "add") == 0) {
        int b = atoi(argv[3]);
        result = add(a, b);
    } else if (strcmp(op, "sub") == 0) {
        int b = atoi(argv[3]);
        result = sub(a, b);
    } else if (strcmp(op, "mul") == 0) {
        int b = atoi(argv[3]);
        result = mul(a, b);
    } else if (strcmp(op, "div") == 0) {
        int b = atoi(argv[3]);
        result = divide(a, b);
    } else if (strcmp(op, "car") == 0) {
        result = car(a);
    } else {
        printf("Unknown operation\n");
        return 1;
    }

    printf("%d\n", result);
    return 0;
}

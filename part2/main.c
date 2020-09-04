#include <stdio.h>
#include <stdbool.h>
#include "misc.h"

enum C {
    HELLO = (char)0,
    NO,
    YES
};

union A {
    int b;
    int a;
};

struct B {
    long double b;
    char a;
};

typedef struct {
    int z;
} D;

int main() {
    char b[4] = {1,2,3};
    SHOW_BITS(b);
}
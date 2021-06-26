#include <stdio.h>
#include "misc.h"


int main() {
    int arr[3] = {1,2,3};
    printf("%d %d\n", arr[0], arr[2]);
    SHOW_BITS(arr);
}
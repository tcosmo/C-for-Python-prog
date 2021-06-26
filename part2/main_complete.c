#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "misc.h"

size_t my_strlen(char str[]) {
    size_t i = 0;
    while (str[i] != '\0') {
        i += 1;
    }
    return i;
}


int main() {

    /* Arrays */
    int arr[5] = {1,2,3,4,5};

    // arr[0] arr[1]

    // printf("%zu\n", sizeof(arr)); // %zu instead of %ld
    
    // SHOW_BITS(arr);

    // int arr[] = {1,2,3,4,5,6};

    // - Arrays are static, I cant add stuff later
    // - All array elements must have same type

    size_t array_size = 12; // stddef %zu
    int arr2[array_size];

    /* Strings */
    char str[] = "hello";

    // Equivalent to: !! single quotes
    //char str[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("%zu\n", sizeof(str));
    printf("%s\n", str);

    printf("%zu %zu\n", strlen(str), my_strlen(str)); // <string.h>

    return 0;
}
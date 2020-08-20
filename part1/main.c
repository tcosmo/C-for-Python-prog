#include <stdio.h>
#include <stdbool.h>
#include "misc.h"

/*
    Good reference on C types:
    https://en.wikipedia.org/wiki/C_data_types
*/

int main() {
    
    char char_var = 5;
    SHOW_BITS(char_var);
    printf("Value: %hhi\n", char_var);

    short short_var = 5;
    SHOW_BITS(short_var);
    printf("Value: %hi\n", short_var);

    int int_var = 5;
    SHOW_BITS(int_var);
    printf("Value: %i or %d\n", int_var,int_var);


    unsigned char uchar_var = 255;
    SHOW_BITS(uchar_var);
    printf("Value: %hhu\n\n", uchar_var);

    /* OVERFLOW!!!! */

    uchar_var = 256;
    SHOW_BITS(uchar_var);
    printf("Value: %hhu\n", uchar_var);

    scanf("%hhu", &uchar_var);
    printf("Entered value: %hhu\n", uchar_var);


    /* SIGNED NUMBERS */
    // char char_var = -1;
    // SHOW_BITS(char_var);
    // printf("Value: %hhi\n\n", char_var);

    char_var = -56;
    SHOW_BITS(char_var);
    printf("Value: %hhi\n\n", char_var);

    char_var = 43;
    SHOW_BITS(char_var);
    printf("Value: %hhi\n", char_var);

    /* OVERFLOW!!!! */
    char_var = -129;
    SHOW_BITS(char_var);
    printf("Value: %hhi\n", char_var);

    char_var = 255;
    SHOW_BITS(char_var);
    printf("Value: %hhi\n", char_var);

    /* FLOATING NUMBERS */
    float float_var = 1e9;
    SHOW_BITS(float_var);
    printf("Value: %f\n", float_var);

    float_var = 233;
    SHOW_BITS(float_var);
    printf("Value: %f\n\n", float_var);

    int int_var2 = 233;
    SHOW_BITS(int_var2);
    printf("Value: %d\n", int_var2);

    /* BOOLEANS */
    bool bool_var = true;
    SHOW_BITS(bool_var);

    bool_var = 23029320;
    SHOW_BITS(bool_var);

    bool_var = 0;
    SHOW_BITS(bool_var);

    /* CONST */
    const int c_int = 389;
    //c_int = 32;


    /* BACK TO CHAR: the ASCII table
       http://www.asciitable.com/
    */
    char character = 'a';
    printf("%hhu %c\n", character, character);

    printf("%c\n", character+1);
    return 0;
}
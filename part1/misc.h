#ifndef DEF_MISC_H
#define DEF_MISC_H

#define SHOW_BITS(a) ({ \
    printf("Variable `%s`: ", #a);\
    show_bits(&a, sizeof(a));\
})

void show_uchar(unsigned char a)
{
    for(int i = 7; i >= 0; i-= 1) 
        printf("%d", ((a >> i) & 1));
}

void show_bits(void* a, size_t s)
{
    unsigned char* p = (unsigned char*) a;
    for(int i = s-1; i >= 0 ; i -= 1) {
        show_uchar(p[i]);
        printf(" ");
    }
    printf("\n");
}


#endif
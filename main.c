#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>
#include <float.h>


int main() {


    int a = 456;
    void *b = &a;


    printf("original  |%-100p|\n", b);
    ft_printf("our       |%-100p|\n", b);
    printf("original  |%+100p|\n", b);
    ft_printf("our       |%+100p|\n", b);
    printf("original  |% 100p|\n", b);
    ft_printf("our       |% 100p|\n", b);
    printf("original  |%+ 100p|\n", b);
    ft_printf("our       |%+ 100p|\n", b);
    printf("original  |%- 100p|\n", b);
    ft_printf("our       |%- 100p|\n", b);
    printf("original  |%0100p|\n", b);
    ft_printf("our       |%0100p|\n", b);;













    return 0;
}
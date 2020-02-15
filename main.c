#include <stdio.h>
#include "ft_printf.h"


#define VAL LONG_MAX
#define VAL 0
int main() {

    ft_printf("____________________________  HEXXXXXX ___________________________\n\n");


    ft_printf("_____________________________  ШИРИНА  ___________________________\n\n");


    printf("original  |%-10X|\n", 16);
    ft_printf("our       |%-10X|\n", 16);
    printf("original  |%+10X|\n", 16);
    ft_printf("our       |%+10X|\n", 16);
    printf("original  |%010X|\n", 16);
    ft_printf("our       |%010X|\n", 16);
    printf("original  |%#10X|\n", 16);
    ft_printf("our       |%#10X|\n", 16);
    printf("original  |%-010X|\n", 16);
    ft_printf("our       |%-010X|\n", 16);
    printf("original  |%-#10X|\n", 16);
    ft_printf("our       |%-#10X|\n", 16);
    printf("original  |%#10X|\n", 16);
    ft_printf("our       |%#10X|\n", 16);
    printf("original  |%-010X|\n", 200);
    ft_printf("our       |%-010X|\n", 200);
    printf("original  |%-#1X|\n", 200);
    ft_printf("our       |%-#1X|\n", 200);


    printf("original  |%-15X|\n", 777);
    ft_printf("our       |%-15X|\n", 777);
    printf("original  |%+15X|\n", 7099);
    ft_printf("our       |%+15X|\n", 7099);
    printf("original  |%015X|\n", 12345);
    ft_printf("our       |%015X|\n", 12345);
    printf("original  |% 40X|\n", 1234);
    ft_printf("our       |% 40X|\n", 1234);
    printf("original  |%-+40X|\n", 88);
    ft_printf("our       |%-+40X|\n", 88);
    printf("original  |%-05X|\n", 954);
    ft_printf("our       |%-05X|\n", 954);
    printf("original  |% 020X|\n", 963);
    ft_printf("our       |% 020X|\n", 963);
    printf("original  |%- 20X|\n", 500111);
    ft_printf("our       |%- 20X|\n", 500111);
    printf("original  |%+ 50X|\n", 1000000);
    ft_printf("our       |%+ 50X|\n", 1000000);
    printf("original  |%+035X|\n", 2949);
    ft_printf("our       |%+035X|\n", 2949);



    ft_printf("_____________________________  Звездочка  ___________________________\n\n");


    printf("original  |%-*X|\n", 75, 625);
    ft_printf("our       |%-*X|\n", 75, 625);
    printf("original  |%+*X|\n", 2, 625);
    ft_printf("our       |%+*X|\n", 2, 625);
    printf("original  |%0*X|\n", 1, 625);
    ft_printf("our       |%0*X|\n", 1,625);
    printf("original  |% *X|\n", 100, 625);
    ft_printf("our       |% *X|\n", 100, 625);
    printf("original  |%-+*X|\n", 15, 625);
    ft_printf("our       |%-+*X|\n", 15, 625);
    printf("original  |%-0*X|\n", 10, 82569);
    ft_printf("our       |%-0*X|\n", 10, 82569);
    printf("original  |%- *X|\n", 1, 82569);
    ft_printf("our       |%- *X|\n", 1, 82569);
    printf("original  |%+ *X|\n", 55, 82569);
    ft_printf("our       |%+ *X|\n", 55, 82569);
    printf("original  |%+0*X|\n", 20, 82569);
    ft_printf("our       |%+0*X|\n", 20, 82569);
    printf("original  |% 0*X|\n", 10, 82569);
    ft_printf("our       |% 0*X|\n", 10, 82569);

    ft_printf("\n_____________________________ТОЧНОСТЬ______________________________\n\n");

    printf("original  |%.X|\n", 625);
    ft_printf("our       |%.X|\n", 625);
    printf("original  |%.0X|\n", 543);
    ft_printf("our       |%.0X|\n", 543);
    printf("original  |%.7X|\n", 2345);
    ft_printf("our       |%.7X|\n", 2345);
    printf("original  |%.10X|\n", 152364);
    ft_printf("our       |%.10X|\n", 152364);
    printf("original  |%.30X|\n", 2525);
    ft_printf("our       |%.30X|\n", 2525);
    printf("original  |%.2X|\n", 2345);
    ft_printf("our       |%.2X|\n\n\n", 2345);

    printf("original  |%#.X|\n", 625);
    ft_printf("our       |%#.X|\n", 625);
    printf("original  |%#.0X|\n", 543);
    ft_printf("our       |%#.0X|\n", 543);
    printf("original  |%#.7X|\n", 2345);
    ft_printf("our       |%#.7X|\n", 2345);
    printf("original  |%#.10X|\n", 152364);
    ft_printf("our       |%#.10X|\n", 152364);
    printf("original  |%#.30X|\n", 2525);
    ft_printf("our       |%#.30X|\n", 2525);
    printf("original  |%#.2X|\n", 2345);
    ft_printf("our       |%#.2X|\n\n\n", 2345);

    printf("original  |%-.X|\n", 625);
    ft_printf("our       |%-.X|\n", 625);
    printf("original  |%-.0X|\n", 543);
    ft_printf("our       |%-.0X|\n", 543);
    printf("original  |%-.7X|\n", 2345);
    ft_printf("our       |%-.7X|\n", 2345);
    printf("original  |%-.10X|\n", 152364);
    ft_printf("our       |%-.10X|\n", 152364);
    printf("original  |%-.30X|\n", 2525);
    ft_printf("our       |%-.30X|\n", 2525);
    printf("original  |%-.2X|\n", 2345);
    ft_printf("our       |%-.2X|\n\n\n", 2345);


    printf("original  |%-#.X|\n", 625);
    ft_printf("our       |%-#.X|\n", 625);
    printf("original  |%-#.0X|\n", 543);
    ft_printf("our       |%-#.0X|\n", 543);
    printf("original  |%-#.7X|\n", 2345);
    ft_printf("our       |%-#.7X|\n", 2345);
    printf("original  |%-#.10X|\n", 152364);
    ft_printf("our       |%-#.10X|\n", 152364);
    printf("original  |%-#.30X|\n", 2525);
    ft_printf("our       |%-#.30X|\n", 2525);
    printf("original  |%-#.2X|\n", 2345);
    ft_printf("our       |%-#.2X|\n\n\n", 2345);


    ft_printf("\n___  ___  ___  ___   ТОЧНОСТЬ с шириной  ___  ___  ___  ___  ___  ___\n\n");

    printf("original  |%0.X|\n", 625);
    ft_printf("our       |%0.X|\n", 625);
    printf("original  |%10.X|\n", 543);
    ft_printf("our       |%10.X|\n", 543);
    printf("original  |%10.7X|\n", 2345);
    ft_printf("our       |%10.7X|\n", 2345);
    printf("original  |%5.10X|\n", 152364);
    ft_printf("our       |%5.10X|\n", 152364);
    printf("original  |%30.30X|\n", 2525);
    ft_printf("our       |%30.30X|\n", 2525);
    printf("original  |%8.2X|\n", 2345);
    ft_printf("our       |%8.2X|\n\n\n", 2345);

    printf("original  |%#0.X|\n", 625);
    ft_printf("our       |%#0.X|\n", 625);
    printf("original  |%#10.X|\n", 543);
    ft_printf("our       |%#10.X|\n", 543);
    printf("original  |%#10.7X|\n", 2345);
    ft_printf("our       |%#10.7X|\n", 2345);
    printf("original  |%#5.10X|\n", 152364);
    ft_printf("our       |%#5.10X|\n", 152364);
    printf("original  |%#30.30X|\n", 2525);
    ft_printf("our       |%#30.30X|\n", 2525);
    printf("original  |%#8.2X|\n", 2345);
    ft_printf("our       |%#8.2X|\n\n\n", 2345);

    printf("original  |%-0.X|\n", 625);
    ft_printf("our       |%-0.X|\n", 625);
    printf("original  |%-10.X|\n", 543);
    ft_printf("our       |%-10.X|\n", 543);
    printf("original  |%-10.7X|\n", 2345);
    ft_printf("our       |%-10.7X|\n", 2345);
    printf("original  |%-5.10X|\n", 152364);
    ft_printf("our       |%-5.10X|\n", 152364);
    printf("original  |%-30.30X|\n", 2525);
    ft_printf("our       |%-30.30X|\n", 2525);
    printf("original  |%-8.2X|\n", 2345);
    ft_printf("our       |%-8.2X|\n\n\n", 2345);

    printf("original  |%-#0.X|\n", 625);
    ft_printf("our       |%-#0.X|\n", 625);
    printf("original  |%-#10.X|\n", 543);
    ft_printf("our       |%-#10.X|\n", 543);
    printf("original  |%-#10.7X|\n", 2345);
    ft_printf("our       |%-#10.7X|\n", 2345);
    printf("original  |%-#5.10X|\n", 152364);
    ft_printf("our       |%-#5.10X|\n", 152364);
    printf("original  |%-#30.30X|\n", 2525);
    ft_printf("our       |%-#30.30X|\n", 2525);
    printf("original  |%-#8.2X|\n", 2345);
    ft_printf("our       |%-#8.2X|\n\n\n", 2345);


    printf("original  |%-10X|\n", 16);
    ft_printf("our       |%-10X|\n", 16);
    printf("original  |%+10X|\n", 16);
    ft_printf("our       |%+10X|\n", 16);
    printf("original  |%010X|\n", 16);
    ft_printf("our       |%010X|\n", 16);
    printf("original  |%#10X|\n", 16);
    ft_printf("our       |%#10X|\n", 16);

    ft_printf("____________________________  ОТРИЦАТЕЛЬНЫЕ ___________________________\n\n");
    ft_printf("_____________________________  ШИРИНА  ___________________________\n\n");

    printf("original  |%-10X|\n", -16);
    ft_printf("our       |%-10X|\n", -16);
    printf("original  |%+10X|\n", -16);
    ft_printf("our       |%+10X|\n", -16);
    printf("original  |%010X|\n", -16);
    ft_printf("our       |%010X|\n", -16);
    printf("original  |%#10X|\n", -16);
    ft_printf("our       |%#10X|\n", -16);
    printf("original  |%-010X|\n", -16);
    ft_printf("our       |%-010X|\n", -16);
    printf("original  |%-#10X|\n", -16);
    ft_printf("our       |%-#10X|\n", -16);
    printf("original  |%#10X|\n", -16);
    ft_printf("our       |%#10X|\n", -16);
    printf("original  |%-010X|\n", -200);
    ft_printf("our       |%-010X|\n", -200);
    printf("original  |%-#1X|\n", -200);
    ft_printf("our       |%-#1X|\n", -200);


    printf("original  |%-15X|\n", -777);
    ft_printf("our       |%-15X|\n", -777);
    printf("original  |%+15X|\n", -7099);
    ft_printf("our       |%+15X|\n", -7099);
    printf("original  |%015X|\n", -12345);
    ft_printf("our       |%015X|\n", -12345);
    printf("original  |% 40X|\n", -1234);
    ft_printf("our       |% 40X|\n", -1234);
    printf("original  |%-+40X|\n", -88);
    ft_printf("our       |%-+40X|\n", -88);
    printf("original  |%-05X|\n", -954);
    ft_printf("our       |%-05X|\n", -954);
    printf("original  |% 020X|\n", -963);
    ft_printf("our       |% 020X|\n", -963);
    printf("original  |%- 20X|\n", -500111);
    ft_printf("our       |%- 20X|\n", -500111);
    printf("original  |%+ 50X|\n", -1000000);
    ft_printf("our       |%+ 50X|\n", -1000000);
    printf("original  |%+035X|\n", -2949);
    ft_printf("our       |%+035X|\n", -2949);



    ft_printf("_____________________________  Звездочка  ___________________________\n\n");


    printf("original  |%-*x|\n", 75, -625);
    ft_printf("our       |%-*x|\n", 75, -625);
    printf("original  |%+*x|\n", 2, -625);
    ft_printf("our       |%+*x|\n", 2, -625);
    printf("original  |%0*x|\n", 1, -625);
    ft_printf("our       |%0*x|\n", 1, -625);
    printf("original  |% *x|\n", 100, -625);
    ft_printf("our       |% *x|\n", 100, -625);
    printf("original  |%-+*x|\n", 15, -625);
    ft_printf("our       |%-+*x|\n", 15, -625);
    printf("original  |%-0*x|\n", 10, -82569);
    ft_printf("our       |%-0*x|\n", 10, -82569);
    printf("original  |%- *x|\n", 1, -82569);
    ft_printf("our       |%- *x|\n", 1, -82569);
    printf("original  |%+ *x|\n", 55, -82569);
    ft_printf("our       |%+ *x|\n", 55, -82569);
    printf("original  |%+0*x|\n", 20, -82569);
    ft_printf("our       |%+0*x|\n", 20, -82569);
    printf("original  |% 0*x|\n", 10, -82569);
    ft_printf("our       |% 0*x|\n", 10, -82569);

    ft_printf("\n_____________________________ТОЧНОСТЬ______________________________\n\n");

    printf("original  |%.x|\n", -625);
    ft_printf("our       |%.x|\n", -625);
    printf("original  |%.0x|\n", -543);
    ft_printf("our       |%.0x|\n", -543);
    printf("original  |%.7x|\n", -2345);
    ft_printf("our       |%.7x|\n", -2345);
    printf("original  |%.10x|\n", -152364);
    ft_printf("our       |%.10x|\n", -152364);
    printf("original  |%.30x|\n", -2525);
    ft_printf("our       |%.30x|\n", -2525);
    printf("original  |%.2x|\n", -2345);
    ft_printf("our       |%.2x|\n\n\n", -2345);

    printf("original  |%#.x|\n", -625);
    ft_printf("our       |%#.x|\n", -625);
    printf("original  |%#.0x|\n", -543);
    ft_printf("our       |%#.0x|\n", -543);
    printf("original  |%#.7x|\n", -2345);
    ft_printf("our       |%#.7x|\n", -2345);
    printf("original  |%#.10x|\n", -152364);
    ft_printf("our       |%#.10x|\n", -152364);
    printf("original  |%#.30x|\n", -2525);
    ft_printf("our       |%#.30x|\n", -2525);
    printf("original  |%#.2x|\n", -2345);
    ft_printf("our       |%#.2x|\n\n\n", -2345);

    printf("original  |%-.x|\n", -625);
    ft_printf("our       |%-.x|\n", -625);
    printf("original  |%-.0x|\n", -543);
    ft_printf("our       |%-.0x|\n", -543);
    printf("original  |%-.7x|\n", -2345);
    ft_printf("our       |%-.7x|\n", -2345);
    printf("original  |%-.10x|\n", -152364);
    ft_printf("our       |%-.10x|\n", -152364);
    printf("original  |%-.30x|\n", -2525);
    ft_printf("our       |%-.30x|\n", -2525);
    printf("original  |%-.2x|\n", -2345);
    ft_printf("our       |%-.2x|\n\n\n", -2345);


    printf("original  |%-#.x|\n", -625);
    ft_printf("our       |%-#.x|\n", -625);
    printf("original  |%-#.0x|\n", -543);
    ft_printf("our       |%-#.0x|\n", -543);
    printf("original  |%-#.7x|\n", -2345);
    ft_printf("our       |%-#.7x|\n", -2345);
    printf("original  |%-#.10x|\n", -152364);
    ft_printf("our       |%-#.10x|\n", -152364);
    printf("original  |%-#.30x|\n", -2525);
    ft_printf("our       |%-#.30x|\n", -2525);
    printf("original  |%-#.2x|\n", -2345);
    ft_printf("our       |%-#.2x|\n\n\n", -2345);


    ft_printf("\n___  ___  ___  ___   ТОЧНОСТЬ с шириной  ___  ___  ___  ___  ___  ___\n\n");

    printf("original  |%0.x|\n", -625);
    ft_printf("our       |%0.x|\n", -625);
    printf("original  |%10.x|\n", -543);
    ft_printf("our       |%10.x|\n", -543);
    printf("original  |%10.7x|\n", -2345);
    ft_printf("our       |%10.7x|\n", -2345);
    printf("original  |%5.10x|\n", -152364);
    ft_printf("our       |%5.10x|\n", -152364);
    printf("original  |%30.30x|\n", -2525);
    ft_printf("our       |%30.30x|\n", -2525);
    printf("original  |%8.2x|\n", -2345);
    ft_printf("our       |%8.2x|\n\n\n", -2345);

    printf("original  |%#0.x|\n", -625);
    ft_printf("our       |%#0.x|\n", -625);
    printf("original  |%#10.x|\n", -543);
    ft_printf("our       |%#10.x|\n", -543);
    printf("original  |%#10.7x|\n", -2345);
    ft_printf("our       |%#10.7x|\n", -2345);
    printf("original  |%#5.10x|\n", -152364);
    ft_printf("our       |%#5.10x|\n", -152364);
    printf("original  |%#30.30x|\n", -2525);
    ft_printf("our       |%#30.30x|\n", -2525);
    printf("original  |%#8.2x|\n", -2345);
    ft_printf("our       |%#8.2x|\n\n\n", -2345);

    printf("original  |%-0.x|\n", -625);
    ft_printf("our       |%-0.x|\n", -625);
    printf("original  |%-10.x|\n", -543);
    ft_printf("our       |%-10.x|\n", -543);
    printf("original  |%-10.7x|\n", -2345);
    ft_printf("our       |%-10.7x|\n", -2345);
    printf("original  |%-5.10x|\n", -152364);
    ft_printf("our       |%-5.10x|\n", -152364);
    printf("original  |%-30.30x|\n", -2525);
    ft_printf("our       |%-30.30x|\n", -2525);
    printf("original  |%-8.2x|\n", -2345);
    ft_printf("our       |%-8.2x|\n\n\n", -2345);

    printf("original  |%-#0.x|\n", -625);
    ft_printf("our       |%-#0.x|\n", -625);
    printf("original  |%-#10.x|\n", -543);
    ft_printf("our       |%-#10.x|\n", -543);
    printf("original  |%-#10.7x|\n", -2345);
    ft_printf("our       |%-#10.7x|\n", -2345);
    printf("original  |%-#5.10x|\n", -152364);
    ft_printf("our       |%-#5.10x|\n", -152364);
    printf("original  |%-#30.30x|\n", -2525);
    ft_printf("our       |%-#30.30x|\n", -2525);
    printf("original  |%-#8.2x|\n", -2345);
    ft_printf("our       |%-#8.2x|\n\n\n", -2345);


    printf("original  |%-10x|\n", -16);
    ft_printf("our       |%-10x|\n", -16);
    printf("original  |%+10x|\n", -16);
    ft_printf("our       |%+10x|\n", -16);
    printf("original  |%010x|\n", -16);
    ft_printf("our       |%010x|\n", -16);
    printf("original  |%#10x|\n", -16);
    ft_printf("our       |%#10x|\n", -16);




    ft_printf("_______________l,ll,h,hh__________________________\n\n");
    printf("original  |%x|\n", 1234567890);
    ft_printf("our       |%x|\n", 1234567890);
    printf("original  |%x|\n", -1);
    ft_printf("our       |%x|\n", -1);
    printf("original  |%x|\n", 12345678901);
    ft_printf("our       |%x|\n", 12345678901);
    printf("original  |%x|\n", -1234567890);
    ft_printf("our       |%x|\n", -1234567890);
    printf("original  |%x|\n", -12345678901);
    ft_printf("our       |%x|\n", -12345678901);
    printf("original  |%x|\n", -123);
    ft_printf("our       |%x|\n", -123);
    printf("original  |%x|\n", 0);
    ft_printf("our       |%x|\n", 0);
    printf("original  |%x|\n", -123456789);
    ft_printf("our       |%x|\n\n", -123456789);

    printf("original  |%lx|\n", 12345678901);
    ft_printf("our       |%lx|\n", 12345678901);
    printf("original  |%lx|\n", 12);
    ft_printf("our       |%lx|\n", 12);
    printf("original  |%llx|\n", 123456);
    ft_printf("our       |%llx|\n", 123456);
    printf("original  |%llx|\n", -12345);
    ft_printf("our       |%llx|\n", -12345);
    printf("original  |%lx|\n", -12345678901);
    ft_printf("our       |%lx|\n", -12345678901);
    printf("original  |%lx|\n", 6956356536458313);
    ft_printf("our       |%lx|\n", 6956356536458313);
    printf("original  |%lx|\n", 9223372036854775807);
    ft_printf("our       |%lx|\n", 9223372036854775807);
    printf("original  |%llx|\n", 9223372036854775807);
    ft_printf("our       |%llx|\n", 9223372036854775807);
    printf("original  |%llx|\n", 9223372036854775808);
    ft_printf("our       |%llx|\n\n", 9223372036854775808);

    printf("original  |%hx|\n", 124);
    ft_printf("our       |%hx|\n", 124);
    printf("original  |%hx|\n", 12);
    ft_printf("our       |%hx|\n", 12);
    printf("original  |%hx|\n", 12345);
    ft_printf("our       |%hx|\n", 12345);
    printf("original  |%hx|\n", 32767);
    ft_printf("our       |%hx|\n", 32767);
    printf("original  |%hx|\n", 32768);
    ft_printf("our       |%hx|\n", 32768);
    printf("original  |%hx|\n", -32768);
    ft_printf("our       |%hx|\n", -32768);
    printf("original  |%hx|\n", -32769);
    ft_printf("our       |%hx|\n", -32769);
    printf("original  |%hx|\n", 65535);
    ft_printf("our       |%hx|\n", 65535);
    printf("original  |%hx|\n", -65535);
    ft_printf("our       |%hx|\n", -65535);
    printf("original  |%hx|\n", 65536);
    ft_printf("our       |%hx|\n", 65536);
    printf("original  |%hx|\n", -65536);
    ft_printf("our       |%hx|\n", -65536);
    printf("original  |%hx|\n", 9223372036854775807);
    ft_printf("our       |%hx|\n", 9223372036854775807);
    printf("original  |%hx|\n", "qwer");
    ft_printf("our       |%hx|\n\n", "qwer");


    printf("original  |%hhx|\n", 'r');
    ft_printf("our       |%hhx|\n", 'r');
    printf("original  |%hhx|\n", 12);
    ft_printf("our       |%hhx|\n", 12);
    printf("original  |%hhx|\n", 126);
    ft_printf("our       |%hhx|\n", 126);
    printf("original  |%hhx|\n", -126);
    ft_printf("our       |%hhx|\n", -126);
    printf("original  |%hhx|\n", -129);
    ft_printf("our       |%hhx|\n", -129);
    printf("original  |%hhx|\n", 255);
    ft_printf("our       |%hhx|\n", 255);


















    return 0;
}
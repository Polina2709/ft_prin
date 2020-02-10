#include <stdio.h>
#include "ft_printf.h"

int main() {

    ft_printf("_____________________________  -  0   +  ___________________________\n");
    printf("original  |%-c|\n",'a');
    ft_printf("our       |%-c|\n", 'a');
    printf("original  |%+c|\n",'a');
    ft_printf("our       |%+c|\n", 'a');
    printf("original  |%-+c|\n", 'a');
    ft_printf("our       |%-+c|\n", 'a');
    printf("original  |%-0+-c|\n", 'a');
    ft_printf("our       |%-0+-c|\n", 'a');
    printf("original  |%0c|\n",'a');
    ft_printf("our       |%0c|\n", 'a');
    printf("original  |%0- c|\n",'a');
    ft_printf("our       |%0- c|\n", 'a');

    ft_printf("________________________________ШИРИНА_____________________________\n");

    printf("original  |%010c|\n", 'a');
    ft_printf("our       |%010c|\n", 'a');
    printf("original  |%-10c|\n", 'a');
    ft_printf("our       |%-10c|\n", 'a');
    printf("original  |%-015c|\n", 'a');
    ft_printf("our       |%-015c|\n", 'a');
    printf("original  |%100c|\n", 'a');
    ft_printf("our       |%100c|\n", 'a');
    printf("original  |%015c|\n", 'a');
    ft_printf("our       |%015c|\n", 'a');
    printf("original  |%0+15c|\n", 'a');
    ft_printf("our       |%0+15c|\n", 'a');
    printf("original  |% 15c|\n", 'a');
    ft_printf("our       |% 15c|\n", 'a');
    printf("original  |%0 15c|\n", 'a');
    ft_printf("our       |%0 15c|\n", 'a');
    printf("original  |% 15c|\n", 'a');
    ft_printf("our       |% 15c|\n", 'a');

    ft_printf("_________________________________ЗВЕЗДОЧКА______________________________\n");

    printf("original  |%-*10c|\n", 5, 'a');
    ft_printf("our       |%-*10c|\n", 5, 'a');
    printf("original  |%10*c|\n", 30,  'a');
    ft_printf("our       |%10*c|\n", 30, 'a');
    printf("original  |%-15*c|\n", 5, 'a');
    ft_printf("our       |%-15*c|\n", 5,'a');
    printf("original  |%*100c|\n", 40, 'a');
    ft_printf("our       |%*100c|\n", 40, 'a');
    printf("original  |%015*c|\n", 5, 'a');
    ft_printf("our       |%015*c|\n", 5, 'a');

    ft_printf("_________________________________MULTIPLY______________________________\n");

    printf("original  |%010c|%5c|\n", 'a', 'b');
    ft_printf("our       |%010c|%5c|\n", 'a', 'b');
    printf("original  |%010c|%-50c|\n", 'a', 'b');
    ft_printf("our       |%010c|%-50c|\n", 'a', 'b');
    printf("original  |%010c|%5c|%03c|%*c\n", 'a', 'b', 'c', 3,'d');
    ft_printf("our       |%010c|%5c|%03c|%*c\n", 'a', 'b', 'c', 3,'d');

//______________Проверка string_____________________
    ft_printf("_____________________________  -  0   +  ___________________________\n");
    printf("original  |%-s|\n", "qwer1");
    ft_printf("our       |%-s|\n", "qwer1");
    printf("original  |%+s|\n", "qwer1");
    ft_printf("our       |%+s|\n", "qwer1");
    printf("original  |%-+s|\n", "qwer1");
    ft_printf("our       |%-+s|\n", "qwer1");
    printf("original  |%-0+-s|\n", "qwer1");
    ft_printf("our       |%-0+-s|\n", "qwer1");
    printf("original  |%0s|\n", "qwer1");
    ft_printf("our       |%0s|\n", "qwer1");
    printf("original  |%0- s|\n", "qwer1");
    ft_printf("our       |%0- s|\n", "qwer1");

    ft_printf("________________________________ШИРИНА_____________________________\n");

    printf("original  |%010s|\n", "qwer1");
    ft_printf("our       |%010s|\n", "qwer1");
    printf("original  |%-10s|\n", "qwer1");
    ft_printf("our       |%-10s|\n", "qwer1");
    printf("original  |%-015s|\n", "qwer1");
    ft_printf("our       |%-015s|\n", "qwer1");
    printf("original  |%100s|\n", "qwer1");
    ft_printf("our       |%100s|\n", "qwer1");
    printf("original  |%015s|\n", "qwer1");
    ft_printf("our       |%015s|\n", "qwer1");
    printf("original  |%0+15s|\n", "qwer1");
    ft_printf("our       |%0+15s|\n", "qwer1");
    printf("original  |% 15s|\n", "qwer1");
    ft_printf("our       |% 15s|\n", "qwer1");
    printf("original  |%0 15s|\n","qwer1");
    ft_printf("our       |%0 15s|\n", "qwer1");
    printf("original  |% 15s|\n", "qwer1");
    ft_printf("our       |% 15s|\n", "qwer1");

    ft_printf("_________________________________ЗВЕЗДОЧКА______________________________\n");

    printf("original  |%-*10s|\n", 5, "qwer1");
    ft_printf("our       |%-*10s|\n", 5, "qwer1");
    printf("original  |%10*s|\n", 30, "qwer1");
    ft_printf("our       |%10*s|\n", 30, "qwer1");
    printf("original  |%-15*s|\n", 8, "qwer1");
    ft_printf("our       |%-15*s|\n", 8,"qwer1");
    printf("original  |%*100s|\n", 40, "qwer1");
    ft_printf("our       |%*100s|\n", 40, "qwer1");
    printf("original  |%015*s|\n", 30, "qwer1");
    ft_printf("our       |%015*s|\n", 30, "qwer1");

    ft_printf("_________________________________MULTIPLY______________________________\n");

    printf("original  FIRST|%010s|SECOND|%5s|\n", "qwer1", "qwer2");
    ft_printf("our       FIRST|%010s|SECOND|%5s|\n", "qwer1", "qwer2");
    printf("original  FIRST|%010s|SECOND|%-50s|\n", "qwer1", "qwer2");
    ft_printf("our       FIRST|%010s|SECOND|%-50s|\n", "qwer1", "qwer2");
    printf("original  FIRST|%010s|SECOND|%5s|THIRD|%03s|FOURTH|%*s\n", "qwer1", "qwer2", "qwer3", 30,"qwer4");
    ft_printf("our       FIRST|%010s|SECOND|%5s|THIRD|%03s|FOURTH|%*s\n", "qwer1", "qwer2", "qwer3", 30,"qwer4");

    return 0;
}
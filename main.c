#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>
#include <float.h>


int main() {

	char *name = "Polisha";





	int nbr = 54;

    printf("original  |%-20s%daaaaaaa  %! aaaa %d|\n", name,123, nbr);
    ft_printf("our       |%-20s%daaaaaaa  %! aaaa %d|\n", name,123, nbr);
	printf("original  |%%%|\n", nbr);
    ft_printf("our       |%%%|\n", nbr);
	printf("original  |%%%d|\n", nbr);
	ft_printf("our       |%%%d|\n", nbr);











//    printf("original  |hi,№% %d|\n", nbr);
//    ft_printf("our       |hi,№% %d|\n", nbr);












    return 0;
}
#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
# include "libft/libft.h"
#include <unistd.h>
#include <stdlib.h>

# define FLAGS "%-+0 #123456789.*"
# define TYPES "cCdDsSiI"

typedef	struct s_flag	t_flag;
struct		s_flag
{
    int            flag_left;
    int			   flag_sign;
    int            flag_zero;
    int            flag_space;
    int            flag_hash;
    int            width_star;
    int			   width;
    int            prec_star;
    int            precision;
    int            size;
};

int ft_printf(const char *format, ... );
void *write_usual_text(char *format_line, va_list ap, t_flag *result, char *ret);
void *ft_symbol_join(char *ret, char symbol);
void *add_processed(char *format_line, va_list ap, t_flag *result, char *ret);
void  *skip_to_find_type(char *format_line, va_list ap, t_flag *result, char *s2);

void *find_type(char *format_line, va_list ap, t_flag *result, char *s2);

void zero_result(t_flag *result);
void initialize_result(t_flag *result, char *format_line, va_list ap);
void initialize_flags_in_result(t_flag *result, char *format_line);
void initialize_precision_in_result(t_flag *result, char *format_line, va_list ap);

char *work_with_c(char *to_c, va_list ap, t_flag *result, char *s2);
void *c_flags(va_list ap, t_flag *result, char *s2);

char *work_with_s(char *to_c, va_list ap, t_flag *result, char *s2);
void *s_flags(va_list ap, t_flag *result, char *s2);
void *insert_s(t_flag *result, char *var, char *s2, int wid);

char *work_with_d(char *to_c, va_list ap, t_flag *result, char *s2);
void *d_flags(va_list ap, t_flag *result, char *s2);
void *insert_d(t_flag *result, char *var, char *s2, int wid);

#endif

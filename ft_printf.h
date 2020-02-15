#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
# include "libft/libft.h"
#include <unistd.h>
#include <stdlib.h>

# define FLAGS "%-+0 #123456789.*lh"
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
    int            prec;
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
void initialize_result_d(t_flag *result, char *format_line, va_list ap);
void initialize_flags_in_result(t_flag *result, char *format_line);
int initialize_width_star_in_result(t_flag *result, char *format_line, va_list ap, int wid);
void *initialize_precision_in_result(t_flag *result, char *format_line, va_list ap);
void *initialize_type_flags_in_result(t_flag *result, char *format_line);

char *ft_itoa_long( long n);
int	ft_neg(long n, unsigned long *num);
int	ft_len_of_itoa(unsigned long num);
char	*ft_zero(char *s);

int	ft_intlen(long unsigned int num);
char	*ft_itoa_unsigned(unsigned int n);
int	ft_nbrlen_unsigned(unsigned int n);
unsigned long int	ft_atoi_unsigned(const char *str);
char		*ft_itoa_unsigned_long(unsigned long int n);
int	ft_nbrlen_unsigned_long(unsigned long int n);

char convert(unsigned long int nb);
char	*ft_itoa_base(unsigned long int value, int base);



char *work_with_c(char *to_c, va_list ap, t_flag *result, char *s2);
void *c_flags(va_list ap, t_flag *result, char *s2);

char *work_with_s(char *to_c, va_list ap, t_flag *result, char *s2);
void *s_flags(va_list ap, t_flag *result, char *s2);
void *insert_s(t_flag *result, char *var, char *s2, int wid);
void *insert_s_to_precision(t_flag *result, char *var, char *s2, int wid);

char *work_with_d(char *to_c, va_list ap, t_flag *result, char *s2);
void *d_flags(va_list ap, t_flag *result, char *s2, char *var);
void *var_with_sign(va_list ap, t_flag *result, char *var);
void *fill_zero_or_space(t_flag *result, char *s2);
void *insert_d_width(t_flag *result, char *var, char *s2, int wid);
void *insert_d_width_no_left(t_flag *result, char *s2, char *var, int wid); //
void *insert_d(t_flag *result, char *var, char *s2, int wid);
void *insert_d_width_left(t_flag *result, char *s2, char *var, int wid);//
void *d_flags_precision(va_list ap, t_flag *result, char *s2, char *var);
void *insert_d_precision(t_flag *result, char *s2, char *var_p, int wid_p);

void *mem_and_insert_d_by_wid(t_flag *result, char *s2, char *var_p, int wid_p);
void *mem_for_d_by_width(t_flag *result, char *s2, char *var_p, int wid_p);
void *insert_d_by_width(t_flag *result, char *s2, char *var_p, int wid_p);
void *mem_for_d_by_precision(t_flag *result, char *s2, char *var_p, int wid_p);
void *mem_and_insert_d_for_zero(t_flag *result, char *var, int wid, char *s2);



char *work_with_o(char *to_c, va_list ap, t_flag *result, char *s2);
void *o_flags(va_list ap, t_flag *result, char *s2, char *var);
unsigned  long int   convert_int_to_octal(va_list ap, t_flag *result, char *var);
void *mem_and_insert_o_by_width(t_flag *result, char *new_var, char *s2, int wid);
void *mem_and_insert_o_by_wid(t_flag *result, char *new_var, char *s2, int wid);
void *mem_and_insert_o_by_precision(t_flag *result, char *new_var, char *s2, int wid);


char *work_with_x(char *to_c, va_list ap, t_flag *result, char *s2);
void *x_flags(va_list ap, t_flag *result, char *s2, char *var);
void *mem_x_by_width(t_flag *result, char *new_var, char *s2, int wid);
char *insert_x_by_width_no_prec(t_flag *result, char *new_var, char *s2, int wid);
char *insert_x_by_width_left(t_flag *result, char *new_var, char *s2, int wid);
char *insert_x_by_width_no_left(t_flag *result, char *new_var, char *s2, int wid);
void *mem_and_insert_x_by_wid(t_flag *result, char *new_var, char *s2, int wid);
void *mem_and_insert_x_by_precision(t_flag *result, char *new_var, char *s2, int wid);




#endif

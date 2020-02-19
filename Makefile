NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
INCLUDES = inc/ft_printf.h

SRC := c____flags.c c____work.c d____d_flags_precision.c \
		    d____fill_zero_or_space.c d____flags.c d____insert_d.c \
		    d____insert_d_by_width.c d____insert_d_width.c \
		    d____insert_d_width_left.c d____insert_d_width_no_left.c \
		    d____mem_and_insert_d_by_wid.c d____mem_and_insert_d_for_zero.c \
		    d____mem_for_d_by_precision.c d____mem_for_d_by_width.c \
		    d____var_with_sign.c d____work.c f____add_0_0x.c \
		    f____add_0_sign.c f____add_0_space.c f____add_start.c \
		    f____count_after_dot.c f____flags_work.c f____help_rest.c \
		    f____increm_s.c f____step_precis_for_f.c f____work.c \
		    f____work_before_dot.c format____initialize_flags_in_result.c \
		    format____initialize_precision_in_result.c \
		    format____initialize_result.c \
		    format____initialize_type_flags_in_result.c \
		    format____initialize_width_star_in_result.c \
		    format____skip_to_find_format.c format____zero_result.c \
		    ft_atoi_unsigned.c ft_dtoa.c ft_is_s_dec.c ft_itoa_base.c \
		    ft_itoa_base_XX.c ft_itoa_long.c ft_itoa_unsigned.c \
		    ft_itoa_unsigned_long.c ft_ldtoa.c ft_len.c \
		    ft_locate_char_index.c ft_precision_ftoi.c ft_printf.c \
		    ft_strjoin_free.c ft_strjoin_free2.c ft_strrev____p.c \
		    ft_strsub_free.c o____flags.c o____mem_and_insert_o_by_wid.c \
		    o____mem_and_insert_o_by_precision.c \
		    o____mem_and_insert_o_by_width.c o____work.c p____flags.c \
		    p____malloc_count.c p____record.c p____work.c s____flags.c \
		    s____insert_s.c s____insert_s_to_precision.c s____work.c \
		    u____flags.c u____mem_and_insert_u_by_precision.c \
		    u____mem_and_insert_u_by_wid.c u____mem_and_insert_u_by_width.c \
		    u____work.c x____mem_and_insert_x_by_precision.c \
		    x____mem_and_insert_x_by_wid.c x____mem_and_insert_x_by_width.c \
		    x____work.c x____x_flags.c xx____flags.c \
		    xx____mem_and_insert_x_by_width.c \
		    xx____mem_and_insert_XX_by_precision.c xx____work.c \
		    xx____mem_and_insert_XX_by_wid.c \
		    ft_atoi.c ft_bzero.c ft_itoa.c ft_memalloc.c ft_memset.c \
		    ft_nbrlen.c ft_strchr.c ft_strcpy.c ft_strdup.c \
		    ft_strjoin.c ft_strlen.c ft_char_sign.c ft_isdigit.c \
		    ft_strequ.c \


all: $(NAME)

OBJ = $(SRC:.c=.o)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I inc/ft_printf.h
	ar rc $(NAME) $(OBJ)

%.o: %.c
	gcc $(FLAGS) -c $(SRC) -I inc/ft_printf.h

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

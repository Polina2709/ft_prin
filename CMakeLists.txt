cmake_minimum_required(VERSION 3.14)
project(ft_printf C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(libft)

add_executable(ft_printf
    libft/ft_atoi.c
    libft/ft_bzero.c
    libft/ft_char_sign.c
    libft/ft_from_begin.c
    libft/ft_isalnum.c
    libft/ft_isalpha.c
    libft/ft_isascii.c
    libft/ft_isdigit.c
    libft/ft_islower.c
    libft/ft_isprint.c
    libft/ft_isupper.c
    libft/ft_itoa.c
    libft/ft_lstadd.c
    libft/ft_lstdel.c
    libft/ft_lstdelone.c
    libft/ft_lstiter.c
    libft/ft_lstmap.c
    libft/ft_lstnew.c
    libft/ft_memalloc.c
    libft/ft_memccpy.c
    libft/ft_memchr.c
    libft/ft_memcmp.c
    libft/ft_memcpy.c
    libft/ft_memdel.c
    libft/ft_memmove.c
    libft/ft_memset.c
    libft/ft_nbrlen.c
    libft/ft_putchar.c
    libft/ft_putchar_fd.c
    libft/ft_putendl.c
    libft/ft_putendl_fd.c
    libft/ft_putnbr.c
    libft/ft_putnbr_fd.c
    libft/ft_putstr.c
    libft/ft_putstr_fd.c
    libft/ft_strcat.c
    libft/ft_strchr.c
    libft/ft_strclr.c
    libft/ft_strcmp.c
    libft/ft_strcpy.c
    libft/ft_strdel.c
    libft/ft_strdup.c
    libft/ft_strequ.c
    libft/ft_striter.c
    libft/ft_striteri.c
    libft/ft_strjoin.c
    libft/ft_strlcat.c
    libft/ft_strlen.c
    libft/ft_strmap.c
    libft/ft_strmapi.c
    libft/ft_strncat.c
    libft/ft_strncmp.c
    libft/ft_strncpy.c
    libft/ft_strnequ.c
    libft/ft_strnew.c
    libft/ft_strnstr.c
    libft/ft_strrchr.c
    libft/ft_strsplit.c
    libft/ft_strstr.c
    libft/ft_strsub.c
    libft/ft_strtrim.c
    libft/ft_tolower.c
    libft/ft_toupper.c
    libft/libft.h
    ft_printf.c
    ft_printf.h
    main.c s____work.c format____initialize_type_flags_in_result.c c____work.c d____insert_d_by_width.c d____mem_and_insert_d_for_zero.c ft_itoa_long.c o____work.c ft_itoa_base.c x____work.c XX____work.c x____x_flags.c x____mem_and_insert_x_by_width.c x____mem_and_insert_x_by_wid.c x____mem_and_insert_x_by_precision.c ft_itoa_unsigned.c ft_itoa_unsigned_long.c ft_atoi_unsigned.c xx____flags.c XX____mem_and_insert_x_by_width.c XX____mem_and_insert_XX_by_wid.c XX____mem_and_insert_XX_by_precision.c ft_itoa_base_XX.c s____flags.c s____insert_s.c s____insert_s_to_precision.c o____flags.c o____mem_and_insert_o_by_width.c o____mem_and_insert_o_by_precision.c o____mem_and_insert_o_by_wid.c d____flags.c d____fill_zero_or_space.c d____insert_d_width.c d____insert_d.c d____var_with_sign.c d____insert_d_width_no_left.c d____insert_d_width_left.c d____d_flags_precision.c d____mem_and_insert_d_by_wid.c d____mem_for_d_by_width.c d____mem_for_d_by_precision.c format____skip_to_find_format.c format____zero_result.c format____initialize_result.c format____initialize_width_star_in_result.c format____initialize_flags_in_result.c format____initialize_precision_in_result.c c____flags.c ft_dtoa.c ft_is_s_dec.c f____count_after_dot.c f____help_rest.c ft_ldtoa.c f____work_before_dot.c ft_precision_ftoi.c f____flags_work.c f____add_atart.c f____add_end.c f____add_0_space.c ft_len.c f____add_0_sign.c f____add_0_0x.c ft_strjoin_free.c ft_strjoin_free2.c f____step_precis_for_f.c f____increm_s.c ft_strsub_free.c ft_locate_char_index.c f____work.c d____work.c u____work.c u____flags.c u____mem_and_insert_u_by_width.c u____mem_and_insert_u_by_wid.c u____mem_and_insert_u_by_precision.c p____work.c p____record.c ft_strrev____p.c p____malloc_count.c p____flags.c)

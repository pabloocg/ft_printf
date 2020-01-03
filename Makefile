# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcuadrad <pcuadrad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/17 14:23:19 by pcuadrad          #+#    #+#              #
#    Updated: 2019/11/17 14:23:19 by pcuadrad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# --------------------Rutas----------------------------#

SRCS_PATH = srcs/

SRCSB_PATH = bonus/

OBJS_PATH = objs/

INCLUDES_PATH = includes/

#--------------------Recursos---------------------------#

SRCS =	destructor.c initialize.c processline.c ft_printf.c \
		reinitialize.c check_flags.c check_width.c check_precisition.c \
		check_conversion.c executer.c putspaces.c ft_putnstr.c putstr_printf.c \
		ft_isdigit.c ft_putchar.c ft_strchr.c ft_strldup.c ft_strlen.c ft_substr.c \
		ft_strdup.c ft_strcpy.c putchar_printf.c putpercent_printf.c putzeros.c \
		putnbr_printf.c ft_nbrlen.c putnbr_printf_aux.c putnbr_printf_aux2.c \
		putunsigned_printf.c putunsigned_printf_aux.c puthex_printf.c puthex_printf_aux.c \
		putmemory_printf.c putmemory_printf_aux.c \

SRCSB =	destructor_bonus.c initialize_bonus.c processline_bonus.c ft_printf_bonus.c \
		reinitialize_bonus.c check_flags_bonus.c check_width_bonus.c check_precisition_bonus.c \
		check_conversion_bonus.c executer_bonus.c putspaces_bonus.c ft_putnstr_bonus.c putstr_printf_bonus.c \
		ft_isdigit_bonus.c ft_putchar_bonus.c ft_strchr_bonus.c ft_strldup_bonus.c ft_strlen_bonus.c ft_substr_bonus.c \
		ft_strdup_bonus.c ft_strcpy_bonus.c putchar_printf_bonus.c putpercent_printf_bonus.c putzeros_bonus.c \
		putnbr_printf_bonus.c ft_nbrlen_bonus.c putnbr_printf_aux_bonus.c putnbr_printf_aux2_bonus.c \
		putunsigned_printf_bonus.c putunsigned_printf_aux_bonus.c puthex_printf_bonus.c puthex_printf_aux_bonus.c \
		putmemory_printf_bonus.c putmemory_printf_aux_bonus.c putnbr_plus_space_bonus.c putintpointer_printf_bonus.c \

INCLUDES = printf.h

INCLUDEBONUS = printf_bonus.h

NAME = libftprintf.a

#--------------------Comandos---------------------------#

COMMAND = ar rc ${NAME} ${addprefix ${OBJS_PATH}, ${notdir ${OBJS}}}

COMMANDB = ar rc ${NAME} ${addprefix ${OBJS_PATH}, ${notdir ${OBJSBONUS}}}

COMMAND2 = ranlib ${NAME}

GCC = gcc -Wall -Werror -Wextra -g

CREATEMKDIR = @mkdir -p objs

OBJS = ${addprefix ${SRCS_PATH}, ${SRCS:.c=.o}}

OBJSBONUS = ${addprefix ${SRCSB_PATH}, ${SRCSB:.c=.o}}

RM = rm -f

#---------------------Ordenes---------------------------#

.c.o:
			${CREATEMKDIR}
			@${GCC} -c $< -o ${addprefix ${OBJS_PATH}, ${notdir ${<:.c=.o}}}

$(NAME):	${OBJS} ${addprefix ${INCLUDES_PATH}, ${INCLUDE}}
			@${COMMAND}
			@${COMMAND2}

bonus:		${OBJSBONUS} ${addprefix ${INCLUDES_PATH}, ${INCLUDEBONUS}}
			@${COMMANDB}
			@${COMMAND2}

all:		$(NAME) bonus

re:			fclean all

clean:
			@${RM} ${addprefix ${OBJS_PATH}, ${notdir ${OBJS}}}
			@${RM} ${addprefix ${OBJS_PATH}, ${notdir ${OBJSBONUS}}}

fclean:
			@${RM} ${NAME}

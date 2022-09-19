# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/24 20:15:20 by apuchill          #+#    #+#              #
#    Updated: 2022/09/19 02:44:16 by mohazerr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

DIR_SRCS	=	srcs
DIR_OBJS	=	objs

SRCS 		=	srcs/ft_atoi.c \
srcs/ft_bzero.c \
srcs/ft_isalnum.c \
srcs/ft_isalpha.c \
srcs/ft_isascii.c \
srcs/ft_isdigit.c \
srcs/ft_isprint.c \
srcs/ft_itoa.c \
srcs/ft_putchar_fd.c \
srcs/ft_putendl_fd.c \
srcs/ft_putnbr_fd.c \
srcs/ft_putstr_fd.c \
srcs/ft_split.c \
srcs/ft_strchr.c \
srcs/ft_strdup.c \
srcs/ft_striteri.c \
srcs/ft_strjoin.c \
srcs/ft_strlen.c \
srcs/ft_strncmp.c \
srcs/ft_strnstr.c \
srcs/ft_strrchr.c \
srcs/ft_strtrim.c \
srcs/ft_substr.c \
srcs/ft_tolower.c \
srcs/ft_toupper.c \
srcs/ft_memcpy.c \

OBJS		=	$(subst $(DIR_SRCS), $(DIR_OBJS), $(SRCS:.c=.o))
SOURCES_PREFIXED = $(addprefix $(DIR_SRCS), $(SRCS))

INCLUDES	=	-I includes

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

$(DIR_OBJS)/%.o :	$(DIR_SRCS)/%.c
			@mkdir -p $(DIR_OBJS)
			@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			@ar -rcs $(NAME) $(OBJS)
			@ranlib $(NAME)

clean:
			@rm -f $(OBJS)
			@rm -r $(DIR_OBJS)

fclean:		clean
			@rm -f $(NAME)

re:			fclean all
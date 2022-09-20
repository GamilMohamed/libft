# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mohazerr <mohazerr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/24 20:15:20 by apuchill          #+#    #+#              #
#    Updated: 2022/09/20 03:29:20 by mohazerr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

DIR_SRCS	=	srcs
DIR_IS		=	is
DIR_MEM		=	mem
DIR_PUT		=	put
DIR_STR		=	str
DIR_TO		=	to
DIR_LIST	=	list
DIR_OBJS	=	objs

SRCS 		=	$(DIR_SRCS)/$(DIR_TO)/ft_atoi.c \
$(DIR_SRCS)/$(DIR_TO)/ft_tolower.c \
$(DIR_SRCS)/$(DIR_TO)/ft_toupper.c \
$(DIR_SRCS)/$(DIR_TO)/ft_itoa.c \
$(DIR_SRCS)/$(DIR_IS)/ft_isalpha.c \
$(DIR_SRCS)/$(DIR_IS)/ft_isascii.c \
$(DIR_SRCS)/$(DIR_IS)/ft_isalnum.c \
$(DIR_SRCS)/$(DIR_IS)/ft_isdigit.c \
$(DIR_SRCS)/$(DIR_IS)/ft_isprint.c \
$(DIR_SRCS)/$(DIR_PUT)/ft_putchar_fd.c \
$(DIR_SRCS)/$(DIR_PUT)/ft_putendl_fd.c \
$(DIR_SRCS)/$(DIR_PUT)/ft_putnbr_fd.c \
$(DIR_SRCS)/$(DIR_PUT)/ft_putstr_fd.c \
$(DIR_SRCS)/$(DIR_STR)/ft_split.c \
$(DIR_SRCS)/$(DIR_STR)/ft_strchr.c \
$(DIR_SRCS)/$(DIR_STR)/ft_strdup.c \
$(DIR_SRCS)/$(DIR_STR)/ft_striteri.c \
$(DIR_SRCS)/$(DIR_STR)/ft_strjoin.c \
$(DIR_SRCS)/$(DIR_STR)/ft_strlen.c \
$(DIR_SRCS)/$(DIR_STR)/ft_strncmp.c \
$(DIR_SRCS)/$(DIR_STR)/ft_strnstr.c \
$(DIR_SRCS)/$(DIR_STR)/ft_strrchr.c \
$(DIR_SRCS)/$(DIR_STR)/ft_strtrim.c \
$(DIR_SRCS)/$(DIR_STR)/ft_substr.c \
$(DIR_SRCS)/$(DIR_STR)/ft_strmapi.c \
$(DIR_SRCS)/$(DIR_STR)/ft_strlcpy.c \
$(DIR_SRCS)/$(DIR_STR)/ft_strlcat.c \
$(DIR_SRCS)/$(DIR_MEM)/ft_bzero.c \
$(DIR_SRCS)/$(DIR_MEM)/ft_memcpy.c \
$(DIR_SRCS)/$(DIR_MEM)/ft_memset.c \
$(DIR_SRCS)/$(DIR_MEM)/ft_memmove.c \
$(DIR_SRCS)/$(DIR_MEM)/ft_memchr.c \
$(DIR_SRCS)/$(DIR_MEM)/ft_memcmp.c \
$(DIR_SRCS)/$(DIR_MEM)/ft_calloc.c \

OBJS		=	$(subst $(DIR_SRCS), $(DIR_OBJS), $(SRCS:.c=.o))
SOURCES_PREFIXED = $(addprefix $(DIR_SRCS), $(SRCS))

INCLUDES	=	-I includes

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

$(DIR_OBJS)/%.o :	$(DIR_SRCS)/%.c
			@mkdir -p $(DIR_OBJS)/$(DIR_TO)
			@mkdir -p $(DIR_OBJS)/$(DIR_IS)
			@mkdir -p $(DIR_OBJS)/$(DIR_PUT)
			@mkdir -p $(DIR_OBJS)/$(DIR_STR)
			@mkdir -p $(DIR_OBJS)/$(DIR_MEM)
			@mkdir -p $(DIR_OBJS)/$(DIR_LIST)
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
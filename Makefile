# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschapin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 16:29:36 by jschapin          #+#    #+#              #
#    Updated: 2021/12/10 15:08:47 by jschapin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES	= ft_atoi.c \
		  ft_bzero.c \
		  ft_calloc.c \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_itoa.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_memset.c \
		  ft_putchar_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_putstr_fd.c \
		  ft_split.c \
		  ft_strchr.c \
		  ft_strdup.c \
		  ft_striteri.c \
		  ft_strjoin.c \
		  ft_strlcat.c \
		  ft_strlen.c \
		  ft_strmapi.c \
		  ft_strncmp.c \
		  ft_strnstr.c \
		  ft_strrchr.c \
		  ft_strtrim.c \
		  ft_substr.c \
		  ft_tolower.c \
		  ft_toupper.c \
		  ft_strlcpy.c \

SOURCESBONUS = ft_lstnew.c \
			   ft_lstadd_front.c \
			   ft_lstsize.c \
			   ft_lstlast.c \
			   ft_lstadd_back.c \
			   ft_lstdelone.c \
			   ft_lstclear.c \
			   ft_lstiter.c \
			   ft_lstmap.c \

INCLUDES 	= libft.h

OBJETS		= ${SOURCES:.c=.o}

OBJETSBONUS	= ${SOURCESBONUS:.c=.o}

NAME		= libft.a

AR			= ar rcs

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

.c.o:
						${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCLUDES}

${NAME}:	${OBJETS}
						${AR} ${NAME} ${OBJETS}

all:		${NAME}

bonus:		${OBJETS} ${OBJETSBONUS}
						${AR} ${NAME} ${OBJETS} ${OBJETSBONUS}	

clean :
						rm -f ${OBJETS} ${OBJETSBONUS}
fclean:	clean
						rm -f ${NAME}
re:	fclean all

.PHONY:		all clean fclean re bonus

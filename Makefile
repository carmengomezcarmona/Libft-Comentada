# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carmgome <carmgome@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/01 19:16:15 by carmgome          #+#    #+#              #
#    Updated: 2025/12/01 19:31:48 by carmgome         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre de la librería final
NAME = libft.a

# Carpeta donde pondremos los objetos
OBJDIR = obj

# Archivos fuente
SRC = ft_isalnum.c ft_bzero.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_memset.c ft_strlen.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# Objetos, todos dentro de obj/
OBJ = $(addprefix $(OBJDIR)/,$(SRC:.c=.o))

# Compilador y flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Regla por defecto
all: $(NAME)

# Cómo construir la librería
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Cómo compilar cada archivo .c en obj/.o
$(OBJDIR)/%.o: %.c
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar objetos
clean:
	rm -rf $(OBJDIR)

# Limpiar todo, objetos + librería
fclean: clean
	rm -f $(NAME)

# Limpia y recompila todo desde cero
re: fclean all

# Decirle a make que estos nombres son "comandos", no archivos
.PHONY: all clean fclean re
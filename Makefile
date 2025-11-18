# =======================
#   Libft - Simple Makefile
# =======================

NAME     = libft.a
CC       = cc
CFLAGS   = -Wall -Wextra -Werror -g   # -g works for both gdb and lldb
CPPFLAGS = -I .
AR       = ar
ARFLAGS  = rcs
RM       = rm -f
RMDIR    = rm -rf

SRC = \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_strdup.c \
 	ft_putnbr_fd.c \
	ft_putendl_fd.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_strtrim.c \
	ft_striteri.c  

OBJ = $(SRC:.c=.o)

# ---------- Rules ----------
all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

# Test executable (uses tests.c and links with the library)
tests: $(NAME) tests.c
	$(CC) $(CFLAGS) $(CPPFLAGS) tests.c $(NAME) -o tests
	@echo "Run: ./tests"

clean:
	$(RM) $(OBJ)
	$(RMDIR) tests.dSYM
	@echo "Object files and tests.dSYM removed"

fclean: clean
	$(RM) $(NAME) tests
	@echo "Library and test binary removed"

re: fclean all

.PHONY: all clean fclean re tests

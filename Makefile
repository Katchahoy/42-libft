CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a
INCL=./includes
SRC=ft_atoi.c\
	ft_bzero.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_itoa.c\
	ft_lstadd.c\
	ft_lstdel.c\
	ft_lstdelone.c\
	ft_lstiter.c\
	ft_lstmap.c\
	ft_lstnew.c\
	ft_memalloc.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memdel.c\
	ft_memmove.c\
	ft_memset.c\
	ft_power.c\
	ft_putchar.c\
	ft_putchar_fd.c\
	ft_putendl.c\
	ft_putendl_fd.c\
	ft_putnbr.c\
	ft_putnbr_fd.c\
	ft_putstr.c\
	ft_putstr_fd.c\
	ft_strcat.c\
	ft_strchr.c\
	ft_strclr.c\
	ft_strcmp.c\
	ft_strcpy.c\
	ft_strdel.c\
	ft_strdup.c\
	ft_strequ.c\
	ft_striter.c\
	ft_striteri.c\
	ft_strjoin.c\
	ft_strlcat.c\
	ft_strlen.c\
	ft_strmap.c\
	ft_strmapi.c\
	ft_strncat.c\
	ft_strncmp.c\
	ft_strncpy.c\
	ft_strnequ.c\
	ft_strnew.c\
	ft_strnstr.c\
	ft_strrchr.c\
	ft_strsplit.c\
	ft_strstr.c\
	ft_strsub.c\
	ft_strtrim.c\
	ft_tolower.c\
	ft_toupper.c
OBJ=$(notdir $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\e[38;5;11m @@@@@@    @@@@@@@   @@@@@@   @@@@@@@   @@@@@@@   @@@@@@@@  @@@  @@@  @@@@@@@\n\
\e[38;5;9m@@@@@@@   @@@@@@@@  @@@@@@@@  @@@@@@@@  @@@@@@@@  @@@@@@@@  @@@@ @@@  @@@@@@@\n\
\e[38;5;13m!@@       !@@       @@!  @@@  @@!  @@@  @@!  @@@  @@!       @@!@!@@@    @@!\n\
\e[38;5;12m!@!       !@!       !@!  @!@  !@!  @!@  !@!  @!@  !@!       !@!!@!@!    !@!\n\
\e[38;5;6m!!@@!!    !@!       @!@!@!@!  @!@!!@!   @!@@!@!   @!!!:!    @!@ !!@!    @!!\n\
\e[38;5;10m !!@!!!   !!!       !!!@!!!!  !!@!@!    !!@!!!    !!!!!:    !@!  !!!    !!!\n\
\e[38;5;15m     !:!  :!!       !!:  !!!  !!: :!!   !!:       !!:       !!:  !!!    !!:\n\
\e[38;5;7m    !:!   :!:       :!:  !:!  :!:  !:!  :!:       :!:       :!:  !:!    :!:\n\
\e[38;5;7m:::: ::    ::: :::  ::   :::  ::   :::   ::        :: ::::   ::   ::     ::\n\
\e[38;5;8m:: : :     :: :: :   :   : :   :   : :   :        : :: ::   ::    :      :\n"
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@/bin/rm -f $(OBJ)
	@echo "\e[38;5;15mCompiled \e[38;5;2m$(NAME)\e[38;5;15m successfully"
	

$(OBJ):
	@$(CC) $(CFLAGS) -I $(INCL) -c $(SRC)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: $(NAME) all clean fclean re
NAME=libasm.a

SRC=ft_write.s ft_read.s ft_strlen.s ft_strcmp.s ft_strcpy.s ft_strdup.s

OBJ=$(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.s
	nasm -fmacho64 $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

check: re
	rm -f libasm
	gcc -Wall -Wextra -Werror -L. -lasm main.c -o libasm
	./libasm
	
out:
	rm -f libasm

txt:
	rm -f file.txt

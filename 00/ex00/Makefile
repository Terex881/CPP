NAME = megaphone

CC = c++
FLAG = -Wall -Wextra -Werror -std=c++98 # remove this


OBJ = megaphone.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS)  -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

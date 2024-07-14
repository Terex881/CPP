NAME = account

CC = c++
FLAGS = -Wall -Wextra -Werror  -std=c++98 # remove this


OBJ = Account.o tests.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME)

%.o: %.c Account.hpp
	$(CC) $(FLAGS)  -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

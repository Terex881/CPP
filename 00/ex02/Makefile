NAME = account

CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

OBJ =  Account.o tests.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAG) -o $@

%.o: %.cpp Account.hpp
	$(CC) $(FLAG)  -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

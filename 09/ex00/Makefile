NAME = btc

CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

OBJ =  main.o BitcoinExchange.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAG) -o $@

%.o: %.cpp BitcoinExchange.hpp
	$(CC) $(FLAG)  -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
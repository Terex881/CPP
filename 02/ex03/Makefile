NAME = Fixed

CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

OBJ = main.o Fixed.o bsp.o Point.o
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAG) -o $@

%.o: %.cpp Fixed.hpp Point.hpp
	$(CC) $(FLAG)  -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all


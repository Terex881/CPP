NAME = phone

CC = c++ 
FLAGS = -Wall -Wextra -Werror  -std=c++98 # remove this


OBJ = main.o search.o add.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME)

%.o: %.c main.hpp
	$(CC) $(FLAGS)  -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

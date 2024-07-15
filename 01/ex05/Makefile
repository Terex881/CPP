NAME = Harl

CC = c++  -std=c++98 -g -fsanitize=address
FLAGS = #-Wall -Wextra -Werror  # remove this


SRC = main.cpp harl.cpp

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME)

%.o: %.cpp harl.hpp
	$(CC) $(FLAGS)  -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

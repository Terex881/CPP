NAME = Sed

CC = c++
FLAGS = -Wall -Wextra -Werror  -std=c++98 # remove this


SRC = main.cpp

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS)  -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

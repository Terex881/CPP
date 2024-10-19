NAME = Animal

CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

OBJ = main.o Animal.o Dog.o Cat.o WrongCat.o WrongAnimal.o Brain.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAG) -o $@

%.o: %.cpp Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
	$(CC) $(FLAG)  -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
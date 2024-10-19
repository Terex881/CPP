NAME = Interface

CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

OBJ = main.o AMateria.o Character.o  Cure.o Ice.o MateriaSource.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAG) -o $@

%.o: %.cpp AMateria.hpp ICharacter.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp IMateriaSource.hpp
	$(CC) $(FLAG) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
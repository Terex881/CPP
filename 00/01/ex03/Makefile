NAME = VIOLANCE

CC = c++
FLAG = -Wall -Wextra -Werror -std=c++98

OBJ = main.o HumanA.o HumanB.o Weapon.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAG) -o $@

%.o: %.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	$(CC) $(FLAG)  -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

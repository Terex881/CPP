NAME = BraiiiiiiinnnzzzZ

CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

OBJ = main.o Zombie.o newZombie.o randomChump.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAG) -o $@

%.o: %.cpp Zombie.hpp
	$(CC) $(FLAG)  -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all


NAME = Identifier

CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

OBJ = main.o Base.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAG) -o $@

%.o: %.cpp Base.hpp A.hpp B.hpp C.hpp 
	$(CC) $(FLAG) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
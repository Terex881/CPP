NAME = Form

CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

OBJ = main.o Bureaucrat.o Form.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAG) -o $@

%.o: %.cpp Bureaucrat.hpp Form.hpp
	$(CC) $(FLAG) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
NAME = PhoneBook

CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

OBJ =  main.o PhoneBook.o  Contact.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAG) -o $@

%.o: %.cpp PhoneBook.hpp Contact.hpp
	$(CC) $(FLAG)  -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

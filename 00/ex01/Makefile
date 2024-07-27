NAME = phone

CC = c++ -g

FLAG = -Wall -Wextra -Wer REMOVE EXIT ror -std=c++98

OBJ =  phone.o search.o add.o get_set.o

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

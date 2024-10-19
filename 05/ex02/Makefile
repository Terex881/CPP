NAME = Form

CC = c++

FLAG = -Wall -Wextra -Werror -std=c++98

OBJ = main.o Bureaucrat.o AForm.o ShrubberyCreationForm.o PresidentialPardonForm.o RobotomyRequestForm.o

HEADERS = Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAG) -o $@

%.o: %.cpp $(HEADERS)
	$(CC) $(FLAG) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
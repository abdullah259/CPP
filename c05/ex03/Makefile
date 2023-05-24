SRCS = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJS = ${SRCS:.cpp=.o}

CXX = c++

CXXFLAGS = -Werror -Wall -Wextra -std=c++98

NAME = ex03
	
all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
	
re:	fclean all
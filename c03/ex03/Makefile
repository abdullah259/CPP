SRCS = main.cpp ClapTrap.cpp  ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJS = ${SRCS:.cpp=.o}

CXX = c++

CXXFLAGS = -Werror -Wall -Wextra -std=c++98 -Wshadow -Wno-shadow

NAME = ex03
	
all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
	
re:	fclean all
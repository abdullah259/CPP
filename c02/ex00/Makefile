SRCS = Fixed.cpp main.cpp

OBJS = ${SRCS:.cpp=.o}

CXX = c++

CXXFLAGS = -Werror -Wall -Wextra -std=c++98

NAME = thisIsBrain
	
all : $(NAME)

$(NAME): $(OBJS)
	$(CXX)  $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
	
re:	fclean all

.PHONY:	all clean fclean re
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ClapTrap.cpp ScavTrap.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)


all: $(OBJS)
	$(CC) $(CFLAGS) -o ClapTrap $(OBJS)

clean:
	rm -f $(OBJS) $(TEST_OBJS)

fclean: clean
	rm -f ClapTrap $(TEST_EXE)

re: fclean all


.PHONY: all clean fclean re test

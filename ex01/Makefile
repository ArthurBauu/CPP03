CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = ClapTrap.cpp ScavTrap.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

TEST_SRCS = ClapTrap.cpp ScavTrap.cpp tests.cpp
TEST_OBJS = $(TEST_SRCS:.cpp=.o)
TEST_EXE = test_exec

all: $(OBJS)
	$(CC) $(CFLAGS) -o ClapTrap $(OBJS)

clean:
	rm -f $(OBJS) $(TEST_OBJS)

fclean: clean
	rm -f ClapTrap $(TEST_EXE)

re: fclean all

test: $(TEST_OBJS)
	$(CC) $(CFLAGS) -o $(TEST_EXE) $(TEST_OBJS)
	./$(TEST_EXE)

.PHONY: all clean fclean re test

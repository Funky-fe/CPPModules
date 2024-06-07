NAME	= ZombieHorde
CC		= g++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRC		= main.cpp Zombie.cpp zombieHorde.cpp
OBJS	= $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "- Linking"
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "- Zombie Compiled!"

clean:
	@$(RM) $(OBJS)
	@echo "- Objects Removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "- Zombie Removed."

re: fclean all

.PHONY: all clean fclean re

NAME	= Zombie
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRC		= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS	= $(SRC:.cpp=.o)


all: $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "- Compiling"
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "- Zombie Compiled!"

clean:
	@$(RM) $(OBJS)
	@echo "- Objects Removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "- Zombie Removed."

re: clean all

.PHONY: all clean re
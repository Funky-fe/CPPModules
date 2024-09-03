NAME	= Violence
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRC		= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS	= $(SRC:.cpp=.o)


all: $(NAME)

%.o: %.cpp
	@echo "- Compiling $<..."
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "- Compiling... "
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "- Violence Compiled!"

clean:
	@$(RM) $(OBJS)
	@echo "- OBJS Removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "- Violence Removed."

re: clean all

.PHONY: all clean re
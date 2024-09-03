NAME	= Brain
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRC		= main.cpp
OBJS	= $(SRC:.cpp=.o)


all: $(NAME)

%.o: %.cpp
	@echo "- Compiling $<..."
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "- Compiling"
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "- Brain Compiled!"

clean:
	@$(RM) $(OBJS)
	@echo "$(RED)- OBJS Removed."
fclean: clean
	@$(RM) $(NAME)
	@echo "- Brain Removed."

re: clean all

.PHONY: all clean re
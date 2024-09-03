NAME	= harlFilter
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRC		= main.cpp Harl.cpp
OBJS	= $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	@echo "- Compiling $<..."
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "- Compiling $(NAME)..."
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "- HarlFilter Compiled!"

clean:
	@$(RM) $(OBJS)
	@echo "- OBJS Removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "- HarlFilter Removed."

re: clean all

.PHONY: all clean re
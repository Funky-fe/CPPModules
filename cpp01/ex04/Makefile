NAME	= copy
CC		= c++
CFLAGS	= -std=c++98 -Wall -Wextra -Werror 
RM		= rm -rf
SRC		= main.cpp
OBJS	= $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	@echo "- Compiling $<..."
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "- Compiling $(NAME)... "
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "- Copy Compiled!"

clean:
	@$(RM) $(OBJS)
	@echo "- OBJS Removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "- Copy Removed."

re: clean all

.PHONY: all clean re
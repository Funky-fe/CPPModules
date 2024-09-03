NAME	= fixed
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRC		= main.cpp Fixed.cpp
OBJS	= $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "- Compiling Point..."
	@ $(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "- Point Compiled!"

clean:
	@$(RM) $(OBJS)
	@echo "- OBJS Removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "- Fixed Removed."

re: clean all

.PHONY: all clean re
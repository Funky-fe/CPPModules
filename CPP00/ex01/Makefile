NAME	= PhoneBook
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRC		= main.cpp contacts.cpp phonebook.cpp
OBJS	= $(SRC:.cpp=.o)

# Colors

DEFAULT = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m
CURSIVE	= \e[33;3m


all: $(NAME)

%.o: %.cpp
	@echo "$(CURSIVE)$(YELLOW)- Compiling $<... $(DEFAULT)"
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "$(CURSIVE)$(YELLOW)- Compiling $(NAME)... $(DEFAULT)"
	@ $(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@printf "$(GREEN)- PhoneBook Compiled!$(DEFAULT)"

clean:
	@$(RM) $(OBJS)
	@echo "$(RED)- OBJS Removed.$(DEFAULT)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)- PhoneBook Removed.$(DEFAULT)"

re: clean all

.PHONY: all clean re
NAME = megaphone
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = -rm -f
SRC = megaphone.cpp
OBJS = $(SRC:.cpp=.o)

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


all:$(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)- Megaphone Compiled!$(DEFAULT)"

clean:
	$(RM) $(OBJS)
	@echo "$(RED)- Objects cleaned!$(DEFAULT)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(RED)- Megaphone.a Deweted >:3$(DEFAULT)"

re: clean all

.SILENT:
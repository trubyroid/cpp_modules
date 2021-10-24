NAME = megaphone

FILE = $(wildcard *.cpp)
FLAGS = -Wall -Wextra -Werror -std=c++98

all:
	@clang++ $(FLAGS) $(FILE) -o $(NAME)
clean:
	@rm -rf $(NAME)
fclean: clean

re: fclean all

.PHONY: all clean fclean re

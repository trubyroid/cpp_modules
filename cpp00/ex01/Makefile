NAME = phonebook

FILES = $(wildcard *.cpp)
HEADERS = $(wildcard *.hpp)
O_FILES = $(FILES:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(O_FILES)
	@clang++ -g $(FLAGS) $(O_FILES) -o $(NAME)

%.o: %.cpp $(HEADERS)
	@clang++ -c $<

clean:
	@rm -f $(O_FILES)
fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
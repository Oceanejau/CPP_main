NAME = btc_tester

YOUR_BTC = ./btc

FILE_1 = res_input_errors.txt
FILE_2 = res_input_ok.txt
FILE_3 = res_input_chmod.txt
FILE_4 = res_input_main.txt

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 
INCLUDES = ./includes

SRCS =	main.cpp\

OBJS = $(SRCS:.cpp=.o)

all: exec_tests $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -I $(INCLUDES) $(OBJS) -o $(NAME)

exec_tests: 
		./script.sh
.cpp.o:
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $^ -o $@

clean:
	-@rm -rf $(NAME) $(OBJS)
	-@rm -rf $(FILE_1) $(FILE_2) $(FILE_3) $(FILE_4)


fclean: clean
	-@rm -rf $(NAME)

super_clean: fclean
	-@rm -rf $(YOUR_BTC)
re: fclean all

.PHONY: all clean fclean re
.SILENT:
